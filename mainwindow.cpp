#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QCoreApplication>
#include <QSqlError>
#include <QSqlQuery>
#include "signup.h"
#include "homepage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Qt/SQLiteStudio/SISS/SISS.db");

    ui->lineEditUN->setPlaceholderText("Enter Your Username");
    ui->lineEditPass->setPlaceholderText("Enter Your Password");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::testDatabaseConnection()
{
    // Test query
    QSqlQuery testQuery(sqlitedb);
    if (testQuery.exec("SELECT * FROM LoginUser")) {
        qDebug() << "Test query executed successfully!";
    } else {
        // Error handling
        qDebug() << "Error executing test query:" << testQuery.lastError().text();
    }
}

void MainWindow::on_pushButtonLogin_clicked()
{
    QString username = ui->lineEditUN->text();
    QString password = ui->lineEditPass->text();

    if(sqlitedb.open()) {

        QSqlQuery QueryGetUser(sqlitedb);
        QueryGetUser.prepare("SELECT * FROM LoginUser WHERE username=:username AND password=:password");
        QueryGetUser.bindValue(":username", username);
        QueryGetUser.bindValue(":password", password);

        if (QueryGetUser.exec()){
            if (QueryGetUser.next()) {
                this->hide();
                HomePage *homepage = new HomePage();
                homepage->show();
            } else {
                QMessageBox::information(this, "User", "Please Check Your UserName and Password");
            }
        } else {
            QMessageBox::information(this, "Failed", "Query Failed To Execute: " + QueryGetUser.lastError().text());
        }
    } else {
        QMessageBox::information(this, "Database Failed", "Database Connection Failed");
    }
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "SISS", "Are you sure you want to create a new account?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        this->hide();
        SignUp *signup = new SignUp();
        signup->show();
    }
}

void MainWindow::on_pushButtonCancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "SISS", "Are you sure you want to exit?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        qApp->quit();
    }
}
