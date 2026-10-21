#include "settings.h"
#include "ui_settings.h"

#include "warehouse.h"
#include "home.h"
#include "activity.h"
#include "login.h"

QString Settings::m_username = ""; // Define the static member variable


Settings::Settings(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
    showNameFromDatabase();

}

Settings::~Settings()
{
    delete ui;
}

void Settings::setUsername(const QString& name)
{
    m_username = name; // Set the username
    showNameFromDatabase(); // Call showNameFromDatabase after setting the username
}

void Settings::showNameFromDatabase()
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

void Settings::on_PBhome_clicked()
{
    this->hide();
    Home *home = new Home();
    home->show();
}


void Settings::on_PBwarehouse_clicked()
{
    this->hide();
    Activity *act = new Activity();
    act->show();


}


void Settings::on_PBactivity_clicked()
{
    this->hide();
    Warehouse *warehouse = new Warehouse();
    warehouse->show();
}


void Settings::on_pushButton_clicked()
{
    this->hide();
    LogIn *log = new LogIn();
    log-> show();

}

