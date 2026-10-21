#include "warehouse.h"
#include "ui_warehouse.h"
#include "activity.h"
#include "home.h"
#include "settings.h"

QString Warehouse::m_username = ""; // Define the static member variable

Warehouse::Warehouse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Warehouse)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Area 1");
    ui->comboBox->addItem("Area 2");
    ui->comboBox->addItem("Area 3");
    ui->comboBox->addItem("Area 4");
    ui->comboBox->addItem("Area 5");
    ui->comboBox->addItem("Area 6");
    ui->comboBox->addItem("Area 7");
    ui->comboBox->addItem("Area 8");
    ui->comboBox->addItem("Area 9");
    ui->comboBox->addItem("Area 10");
    ui->comboBox->addItem("Area 11");
    ui->comboBox->addItem("Area 12");

    connect(ui->pushButton, &QPushButton::clicked, this, &Warehouse::saveData);
    connect(ui->PB1, &QPushButton::clicked, this, &Warehouse::showDataArea1);
    connect(ui->PB2, &QPushButton::clicked, this, &Warehouse::showDataArea2);
    connect(ui->PB3, &QPushButton::clicked, this, &Warehouse::showDataArea3);
    connect(ui->PB4, &QPushButton::clicked, this, &Warehouse::showDataArea4);
    connect(ui->PB5, &QPushButton::clicked, this, &Warehouse::showDataArea5);
    connect(ui->PB6, &QPushButton::clicked, this, &Warehouse::showDataArea6);
    connect(ui->PB7, &QPushButton::clicked, this, &Warehouse::showDataArea7);
    connect(ui->PB8, &QPushButton::clicked, this, &Warehouse::showDataArea8);
    connect(ui->PB9, &QPushButton::clicked, this, &Warehouse::showDataArea9);
    connect(ui->PB10, &QPushButton::clicked, this, &Warehouse::showDataArea10);
    connect(ui->PB11, &QPushButton::clicked, this, &Warehouse::showDataArea11);
    connect(ui->PB12, &QPushButton::clicked, this, &Warehouse::showDataArea12);


    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Qt/SQLiteStudio/111FINALSISS.db");

    if (!db.open()) {
        // Handle database connection error
        QMessageBox::critical(this, "Database Connection Failed", "Failed to connect to the database.");
    }
    showNameFromDatabase();
}

Warehouse::~Warehouse()
{
    delete ui;
}

void Warehouse::setUsername(const QString& name)
{
    m_username = name; // Set the username
    showNameFromDatabase(); // Call showNameFromDatabase after setting the username
}

void Warehouse::showNameFromDatabase()
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

void Warehouse::showDataArea1()
{
    fetchDataAndDisplay("Area1");
}

void Warehouse::showDataArea2()
{
    fetchDataAndDisplay("Area2");
}

void Warehouse::showDataArea3()
{
    fetchDataAndDisplay("Area3");
}

void Warehouse::showDataArea4()
{
    fetchDataAndDisplay("Area4");
}

void Warehouse::showDataArea5()
{
    fetchDataAndDisplay("Area5");
}

void Warehouse::showDataArea6()
{
    fetchDataAndDisplay("Area6");
}
void Warehouse::showDataArea7()
{
    fetchDataAndDisplay("Area7");
}

void Warehouse::showDataArea8()
{
    fetchDataAndDisplay("Area8");
}

void Warehouse::showDataArea9()
{
    fetchDataAndDisplay("Area9");
}
void Warehouse::showDataArea10()
{
    fetchDataAndDisplay("Area10");
}

void Warehouse::showDataArea11()
{
    fetchDataAndDisplay("Area11");
}

void Warehouse::showDataArea12()
{
    fetchDataAndDisplay("Area12");
}

void Warehouse::on_PBhome_clicked()
{
    this->hide();
    Home *home = new Home();
    home->show();
}

void Warehouse::on_PBact_clicked()
{
    this->hide();
    Activity *act = new Activity();
    act->show();
}

void Warehouse::on_PBsettings_clicked()
{
    this->hide();
    Settings *set = new Settings();
    set->show();
}

void Warehouse::fetchDataAndDisplay(const QString& areaName)
{
    // Establish database connection
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Qt/SQLiteStudio/111FINALSISS.db");

    if (!sqlitedb.open()) {
        qDebug() << "Error: Connection with database failed";
        return;
    }

    QSqlQuery query(sqlitedb); // Pass the database connection to the query constructor

    // Prepare the query to select the latest data for the given area
    query.prepare("SELECT " + areaName + " FROM area ORDER BY ROWID DESC LIMIT 1");

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

void Warehouse::saveData()
{
    QString value = ui->comboBox2->currentText(); // Get the selected text from comboBox2
    int selectedIndex = ui->comboBox->currentIndex(); // Get the selected index of the ComboBox

    // Establish database connection
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        QSqlDatabase::removeDatabase("qt_sql_default_connection");
    }
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Qt/SQLiteStudio/111FINALSISS.db");

    if (!sqlitedb.open()) {
        qDebug() << "Error: Connection with database failed";
        return;
    }

    QSqlQuery query;

    // Fetch existing values from the database
    query.prepare("SELECT * FROM area ORDER BY ROWID DESC LIMIT 1");
    if (!query.exec()) {
        qDebug() << "Error executing select query:" << query.lastError().text();
        return;
    }

    QString area1Value, area2Value, area3Value,area4Value, area5Value, area6Value,area7Value, area8Value, area9Value,area10Value, area11Value, area12Value;

    if (query.next()) {
        area1Value = query.value(0).toString();
        area2Value = query.value(1).toString();
        area3Value = query.value(2).toString();
        area4Value = query.value(3).toString();
        area5Value = query.value(4).toString();
        area6Value = query.value(5).toString();
        area7Value = query.value(6).toString();
        area8Value = query.value(7).toString();
        area9Value = query.value(8).toString();
        area10Value = query.value(9).toString();
        area11Value = query.value(10).toString();
        area12Value = query.value(11).toString();
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
    case 3: // Option 1
        area4Value = value;
        break;
    case 4: // Option 2
        area5Value = value;
        break;
    case 5: // Option 3
        area6Value = value;
        break;
    case 6: // Option 1
        area7Value = value;
        break;
    case 7: // Option 2
        area8Value = value;
        break;
    case 8: // Option 3
        area9Value = value;
        break;
    case 9: // Option 1
        area10Value = value;
        break;
    case 10: // Option 2
        area11Value = value;
        break;
    case 11: // Option 3
        area12Value = value;
        break;
    default:
        break;
    }

    // Prepare and execute insert query
    QString insertQuery = "INSERT INTO area (Area1, Area2, Area3, Area4, Area5, Area6, Area7, Area8, Area9, Area10, Area11, Area12) VALUES (:Area1, :Area2, :Area3,:Area4, :Area5, :Area6,:Area7, :Area8, :Area9,:Area10, :Area11, :Area12)";
    query.prepare(insertQuery);
    query.bindValue(":Area1", area1Value);
    query.bindValue(":Area2", area2Value);
    query.bindValue(":Area3", area3Value);
    query.bindValue(":Area4", area4Value);
    query.bindValue(":Area5", area5Value);
    query.bindValue(":Area6", area6Value);
    query.bindValue(":Area7", area7Value);
    query.bindValue(":Area8", area8Value);
    query.bindValue(":Area9", area9Value);
    query.bindValue(":Area10", area10Value);
    query.bindValue(":Area11", area11Value);
    query.bindValue(":Area12", area12Value);

    if (!query.exec()) {
        qDebug() << "Error executing insert query:" << query.lastError().text();
        return;
    }

    // Inform user about successful data update
    QMessageBox::information(this, "Data saved", "Data updated in Database");
    //  ui->comboBox2->setCurrentIndex(0); // Reset comboBox2 to the first option
}
