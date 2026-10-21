#include "area.h"
#include "ui_area.h"

#include "homepage.h"
#include "area.h"
#include "settings.h"
#include "mainpage.h"

Area::Area(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Area)
{
    ui->setupUi(this);

    // Add options to the ComboBox
    ui->comboBox->addItem("Area 1");
    ui->comboBox->addItem("Area 2");
    ui->comboBox->addItem("Area 3");

    // Connect save button click event
    connect(ui->pushButton, &QPushButton::clicked, this, &Area::saveData);
    connect(ui->PB1, &QPushButton::clicked, this, &Area::showDataArea1);
    connect(ui->PB2, &QPushButton::clicked, this, &Area::showDataArea2);
    connect(ui->PB3, &QPushButton::clicked, this, &Area::showDataArea3);
}

Area::~Area()
{
    delete ui;
}


void Area::showDataArea1()
{
    fetchDataAndDisplay("Area1");
}

void Area::showDataArea2()
{
    fetchDataAndDisplay("Area2");
}

void Area::showDataArea3()
{
    fetchDataAndDisplay("Area3");
}


void Area::fetchDataAndDisplay(const QString& areaName)
{
    // Establish database connection
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Qt/SQLiteStudio/SISS/SISS.db");

    if (!sqlitedb.open()) {
        qDebug() << "Error: Connection with database failed";
        return;
    }

    QSqlQuery query(sqlitedb); // Pass the database connection to the query constructor

    // Prepare the query to select the latest data for the given area
    query.prepare("SELECT " + areaName + " FROM users ORDER BY ROWID DESC LIMIT 1");

    if (!query.exec()) {
        qDebug() << "Error executing select query:" << query.lastError().text();
        sqlitedb.close(); // Close the database connection in case of an error
        return;
    }

    // Read and display the data
    if (query.next()) {
        QString value = query.value(0).toString();
        ui->dataLabel->setText(value);
    } else {
        ui->dataLabel->setText("No data found for " + areaName);
    }

    sqlitedb.close(); // Close the database connection after executing the query
}


void Area::saveData()
{
    QString value = ui->comboBox2->currentText(); // Get the selected text from comboBox2
    int selectedIndex = ui->comboBox->currentIndex(); // Get the selected index of the ComboBox

    // Establish database connection
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        QSqlDatabase::removeDatabase("qt_sql_default_connection");
    }
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Qt/SQLiteStudio/SISS/SISS.db");

    if (!sqlitedb.open()) {
        qDebug() << "Error: Connection with database failed";
        return;
    }

    QSqlQuery query;

    // Fetch existing values from the database
    query.prepare("SELECT * FROM users ORDER BY ROWID DESC LIMIT 1");
    if (!query.exec()) {
        qDebug() << "Error executing select query:" << query.lastError().text();
        return;
    }

    QString area1Value, area2Value, area3Value;

    if (query.next()) {
        area1Value = query.value(0).toString();
        area2Value = query.value(1).toString();
        area3Value = query.value(2).toString();
    }

    // Update the corresponding area value based on the selected index
    switch (selectedIndex) {
    case 0: // Option 1
        area1Value = value;
        break;
    case 1: // Option 2
        area2Value = value;
        break;
    case 2: // Option 3
        area3Value = value;
        break;
    default:
        break;
    }

    // Prepare and execute insert query
    QString insertQuery = "INSERT INTO users (Area1, Area2, Area3) VALUES (:Area1, :Area2, :Area3)";
    query.prepare(insertQuery);
    query.bindValue(":Area1", area1Value);
    query.bindValue(":Area2", area2Value);
    query.bindValue(":Area3", area3Value);

    if (!query.exec()) {
        qDebug() << "Error executing insert query:" << query.lastError().text();
        return;
    }

    // Inform user about successful data update
    QMessageBox::information(this, "Data saved", "Data updated in Database");
    //  ui->comboBox2->setCurrentIndex(0); // Reset comboBox2 to the first option
}


void Area::on_pushButton_2_clicked()
{
    this->hide();
    Area *area = new Area();
    area->show();
}


void Area::on_pushButton_3_clicked()
{
    this->hide();
    HomePage *home = new HomePage();
    home->show();
}


void Area::on_pushButton_4_clicked()
{
    this->hide();
    MainPage *act = new MainPage();
    act->show();
}

void Area::on_pushButton_5_clicked()
{
    this->hide();
    Settings *profile = new Settings();
    profile->show();
}


