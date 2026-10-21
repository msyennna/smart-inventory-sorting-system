// home.cpp
#include "home.h"
#include "ui_home.h"
#include "warehouse.h"
#include "activity.h"
#include "settings.h"

QString Home::m_username = "";  // Define the static member variable

Home::Home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
    showNameFromDatabase();  // Ensure the name is shown when the Home window is created
}

Home::~Home()
{
    delete ui;
}

void Home::setUsername(const QString& name)
{
    m_username = name;  // Set the static username
    showNameFromDatabase();  // Update the UI with the new username
}

void Home::showNameFromDatabase()
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

void Home::on_PBactivity_clicked()
{
    this->hide();
    Warehouse *warehouse = new Warehouse();
    warehouse->show();


}

void Home::on_PBwarehouse_clicked()
{
    this->hide();
    Activity *act = new Activity();
    act->show();
}



void Home::on_PBsettings_clicked()
{
    this->hide();
    Settings *set = new Settings();
    set->show();
}
