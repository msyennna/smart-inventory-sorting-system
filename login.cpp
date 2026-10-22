#include "login.h"
#include "./ui_login.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QCoreApplication>
#include <QSqlError>
#include <QSqlQuery>
#include "home.h"
#include "signup.h"
#include "activity.h"
#include "settings.h"
#include "warehouse.h"

LogIn::LogIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogIn)
{
    ui->setupUi(this);

    sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Qt/SQLiteStudio/SISS.db");

    ui->lineEditEmail->setPlaceholderText("Enter Your Email");
    ui->lineEditPass->setPlaceholderText("Enter Your Password");
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_PBlogin_clicked()
{
    QString email = ui->lineEditEmail->text();
    QString password = ui->lineEditPass->text();

    if(sqlitedb.open()) {
        QSqlQuery QueryGetUser(sqlitedb);
        QueryGetUser.prepare("SELECT name FROM LoginUser WHERE email=:email AND password=:password");
        QueryGetUser.bindValue(":email", email);
        QueryGetUser.bindValue(":password", password);

        if (QueryGetUser.exec()){
            if (QueryGetUser.next()) {
                QString name = QueryGetUser.value(0).toString();
                this->hide();
                Home *home = new Home();
                Warehouse *ware = new Warehouse();
                Settings *set = new Settings();
                Activity *act = new Activity();
                home->setUsername(name);
                ware->setUsername(name);// Pass the name to the Home window
                set->setUsername(name);
                act->setUsername(name);
                home->show();
            } else {
                QMessageBox::information(this, "User", "Please Check Your Email and Password");
            }
        } else {
            QMessageBox::information(this, "Failed", "Query Failed To Execute: " + QueryGetUser.lastError().text());
        }
    } else {
        QMessageBox::information(this, "Database Failed", "Database Connection Failed");
    }
}

void LogIn::on_PBcancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "SISS", "Are you sure you want to exit?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        qApp->quit();
    }
}

void LogIn::on_PBsignup_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "SISS", "Are you sure you want to create a new account?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        this->hide();
        SignUp *signup = new SignUp();
        signup->show();
    }
}
