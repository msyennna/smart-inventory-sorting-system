#include "mainpage.h"
#include "ui_mainpage.h"
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QPixmap>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include "area.h"
#include "homepage.h"
#include "area.h"
#include "settings.h"
#include "mainpage.h"

MainPage::MainPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainPage)
{
    ui->setupUi(this);

    // Connect the push button's clicked signal to updateTableView slot
    connect(ui->pushButtoncreate, &QPushButton::clicked, this, &MainPage::updateTableView);

    // Set up the table view and model
    model = new QStandardItemModel(0, 6, this); // Changed column count to 6
    ui->tableView->setModel(model);
    model->setHorizontalHeaderLabels(QStringList() << "Product" << "Timestamp" << "Fragility" << "Category" << "Size" << "Section");

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Qt/SQLiteStudio/SISS/SISS.db");
    if (!db.open()) {
        QMessageBox::critical(this, "Error", "Failed to open database.");
        return;
    }

    // Create the table 'products' if it doesn't exist
    QSqlQuery createTableQuery;
    createTableQuery.prepare("CREATE TABLE IF NOT EXISTS products (product TEXT, timestamp TEXT, fragility TEXT, category TEXT, size TEXT, section TEXT)");
    if (!createTableQuery.exec()) {
        QMessageBox::critical(this, "Database error", "Error creating table: " + createTableQuery.lastError().text());
        return;
    }

    // Populate the table view with data from the database
    QSqlQuery query("SELECT * FROM products");
    while (query.next()) {
        QString product = query.value(0).toString();
        QString timestamp = query.value(1).toString();
        QString fragility = query.value(2).toString();
        QString category = query.value(3).toString();
        QString size = query.value(4).toString();
        QString section = query.value(5).toString();

        QList<QStandardItem*> rowItems;
        rowItems.append(new QStandardItem(product));
        rowItems.append(new QStandardItem(timestamp));
        rowItems.append(new QStandardItem(fragility));
        rowItems.append(new QStandardItem(category));
        rowItems.append(new QStandardItem(size));
        rowItems.append(new QStandardItem(section));

        model->appendRow(rowItems);
    }

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

MainPage::~MainPage()
{
    delete ui;
}

void MainPage::updateTableView()
{
    // Get data from line edits and combo boxes
    QString product = ui->LEPRODUCT->text();
    QString timestamp = ui->LETIME->text();
    QString fragility = ui->CBFRAGILE->currentText();
    QString category = ui->CBCATEGORY->currentText();
    QString size = ui->CBSIZE->currentText();
    QString section = ui->CBSECTION->currentText();

    // Insert data into the database
    QSqlQuery query;
    query.prepare("INSERT INTO products (product, timestamp, fragility, category, size, section) VALUES (?, ?, ?, ?, ?, ?)");
    query.addBindValue(product);
    query.addBindValue(timestamp);
    query.addBindValue(fragility);
    query.addBindValue(category);
    query.addBindValue(size);
    query.addBindValue(section);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database error", "Error inserting data: " + query.lastError().text());
        return;
    }

    // Update the table view
    QList<QStandardItem*> rowItems;
    rowItems.append(new QStandardItem(product));
    rowItems.append(new QStandardItem(timestamp));
    rowItems.append(new QStandardItem(fragility));
    rowItems.append(new QStandardItem(category));
    rowItems.append(new QStandardItem(size));
    rowItems.append(new QStandardItem(section));

    model->appendRow(rowItems);

    // Clear line edits after adding data
    ui->LEPRODUCT->clear();
    ui->LETIME->clear();
}
void MainPage::on_pushButtonupdate_clicked()
{
    // Get the selected row index
    QModelIndexList selection = ui->tableView->selectionModel()->selectedRows();
    if (selection.isEmpty()) {
        QMessageBox::warning(this, "Warning", "No row selected.");
        return;
    }
    QModelIndex index = selection.at(0);

    // Get the data from the model
    QString product = model->index(index.row(), 0).data().toString();
    QString timestamp = model->index(index.row(), 1).data().toString();
    QString fragility = model->index(index.row(), 2).data().toString();
    QString category = model->index(index.row(), 3).data().toString();
    QString size = model->index(index.row(), 4).data().toString();
    QString section = model->index(index.row(), 5).data().toString();

    // Update the database
    QSqlQuery query;
    query.prepare("UPDATE products SET product = ?, timestamp = ?, fragility = ?, category = ?, size = ?, section = ? WHERE rowid = ?");
    query.addBindValue(product);
    query.addBindValue(timestamp);
    query.addBindValue(fragility);
    query.addBindValue(category);
    query.addBindValue(size);
    query.addBindValue(section);
    query.addBindValue(index.row() + 1); // Assuming rowid starts from 1

    if (!query.exec()) {
        QMessageBox::critical(this, "Database error", "Error updating data: " + query.lastError().text());
        return;
    }

    // Inform the user
    QMessageBox::information(this, "Success", "Data updated successfully.");
}


void MainPage::on_pushButtondelete_clicked()
{
    // Get the selected row(s) from the table view
    QModelIndexList selection = ui->tableView->selectionModel()->selectedRows();

    if (selection.isEmpty()) {
        QMessageBox::warning(this, "Warning", "No row selected.");
        return;
    }

    // Ask for confirmation before deleting
    QMessageBox::StandardButton confirmDelete;
    confirmDelete = QMessageBox::question(this, "Confirm Delete", "Are you sure you want to delete selected row(s)?",
                                          QMessageBox::Yes | QMessageBox::No);

    if (confirmDelete == QMessageBox::No) {
        return;
    }

    // Iterate over selected rows and delete them from the database and model
    QSqlQuery query;
    foreach(const QModelIndex &index, selection) {
        int row = index.row();

        // Delete row from the database
        query.prepare("DELETE FROM products WHERE rowid = ?");
        query.addBindValue(row + 1); // Assuming rowid starts from 1

        if (!query.exec()) {
            QMessageBox::critical(this, "Database error", "Error deleting data: " + query.lastError().text());
        } else {
            // Remove row from the model
            model->removeRow(row);
        }
    }
}



void MainPage::on_pushButton_2_clicked()
{
    this->hide();
    Area *area = new Area();
    area->show();
}


void MainPage::on_pushButton_3_clicked()
{
    this->hide();
    HomePage *home = new HomePage();
    home->show();
}


void MainPage::on_pushButton_4_clicked()
{
    this->hide();
    MainPage *act = new MainPage();
    act->show();
}

void MainPage::on_pushButton_5_clicked()
{
    this->hide();
    Settings *profile = new Settings();
    profile->show();
}
