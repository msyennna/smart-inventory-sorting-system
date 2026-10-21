#include "activity.h"
#include "ui_activity.h"

#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QDateTime>
#include "warehouse.h"
#include "home.h"
#include "settings.h"


QString Activity::m_username = "";

Activity::Activity(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Activity)
{
    ui->setupUi(this);
    connect(ui->PBcreate, &QPushButton::clicked, this, &Activity::updateTableView);

    model = new QStandardItemModel(0, 7, this); // Changed column count to 6
    ui->tableView->setModel(model);
    model->setHorizontalHeaderLabels(QStringList() << "Product" << "Timestamp" << "Fragility" << "Category" << "Size" << "Section" << "Quantity");

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Qt/SQLiteStudio/111FINALSISS.db");
    if (!db.open()) {
        QMessageBox::critical(this, "Error", "Failed to open database.");
        return;
    }

    // Create the table 'products' if it doesn't exist
    QSqlQuery createTableQuery;
    createTableQuery.prepare("CREATE TABLE IF NOT EXISTS products (product TEXT, timestamp TEXT, fragility TEXT, category TEXT, size TEXT, section TEXT , quantity TEXT)");
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
        QString quantity = query.value(6).toString();

        QList<QStandardItem*> rowItems;
        rowItems.append(new QStandardItem(product));
        rowItems.append(new QStandardItem(timestamp));
        rowItems.append(new QStandardItem(fragility));
        rowItems.append(new QStandardItem(category));
        rowItems.append(new QStandardItem(size));
        rowItems.append(new QStandardItem(section));
        rowItems.append(new QStandardItem(quantity));

        model->appendRow(rowItems);
    }

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    showNameFromDatabase();
}

Activity::~Activity()
{
    delete ui;
}
void Activity::setUsername(const QString& name)
{
    m_username = name; // Set the username
    showNameFromDatabase(); // Call showNameFromDatabase after setting the username
}

void Activity::showNameFromDatabase()
{
    if (m_username.isEmpty()) {
        // Handle case where no username is set
        return;
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Qt/SQLiteStudio/111FINALSISS.db");

    if (!db.open()) {
        // Handle database connection error
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT name FROM LoginUser WHERE name = :name");
    query.bindValue(":name", m_username);  // Use the stored username

    if (!query.exec()) {
        // Handle query execution error
        return;
    }

    if (query.next()) {
        QString name = query.value(0).toString();
        ui->labelname->setText(name);
    } else {
        // Handle no record found for the username
    }

    db.close();
}
void Activity::on_PBhome_clicked()
{
    this->hide();
    Home *home = new Home();
    home->show();
}


void Activity::on_PBwarehouse_clicked()
{
    this->hide();
    Warehouse *warehouse = new Warehouse();
    warehouse->show();
}


void Activity::on_PBsettings_clicked()
{
    this->hide();
    Settings *set = new Settings();
    set->show();

}
void Activity::updateTableView()
{
    // Get data from line edits and combo boxes
    QString product = ui->LEPRODUCT->text();
    QString fragility = ui->CBFRAGILE->currentText();
    QString category = ui->CBCATEGORY->currentText();
    QString size = ui->CBSIZE->currentText();
    QString section = ui->CBSECTION->currentText();
    QString quantity = ui->LEQUANTITY->text();

    // Get current date and time
    QString timestamp = QDateTime::currentDateTime().toString("MM-dd-yyyy hh:mm:ss");

    // Check if the database is open
    QSqlDatabase db = QSqlDatabase::database(); // Assuming you have already established a database connection elsewhere
    if (!db.isValid() || !db.isOpen()) {
        QMessageBox::critical(this, "Database error", "Database is not open.");
        return;
    }

    // Insert data into the database
    QSqlQuery query(db);
    query.prepare("INSERT INTO products (product, timestamp, fragility, category, size, section, quantity) VALUES (?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(product);
    query.addBindValue(timestamp); // Include current date and time
    query.addBindValue(fragility);
    query.addBindValue(category);
    query.addBindValue(size);
    query.addBindValue(section);
    query.addBindValue(quantity);

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
    rowItems.append(new QStandardItem(quantity));

    model->appendRow(rowItems);

    // Clear line edits after adding data
    ui->LEPRODUCT->clear();
    ui->LEQUANTITY->clear();
}


void Activity::on_PBupdate_clicked()
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
    QString quantity = model->index(index.row(), 6).data().toString();

    // Update the database
    QSqlQuery query;
    query.prepare("UPDATE products SET product = ?, timestamp = ?, fragility = ?, category = ?, size = ?, section = ?, quantity = ? WHERE rowid = ?");
    query.addBindValue(product);
    query.addBindValue(timestamp);
    query.addBindValue(fragility);
    query.addBindValue(category);
    query.addBindValue(size);
    query.addBindValue(section);
    query.addBindValue(quantity);
    query.addBindValue(index.row() + 1); // Assuming rowid starts from 1

    if (!query.exec()) {
        QMessageBox::critical(this, "Database error", "Error updating data: " + query.lastError().text());
        return;
    }

    // Inform the user
    QMessageBox::information(this, "Success", "Data updated successfully.");
}


void Activity::on_PBdelete_clicked()
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
