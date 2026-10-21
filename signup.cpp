#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"

SignUp::SignUp(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
    ui->LEUN->setPlaceholderText("Enter Your Username");
    ui->LEPASS->setPlaceholderText("Enter Your Password");
    ui->LEEMAIL->setPlaceholderText("Enter Your Email");

    sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Qt/SQLiteStudio/SISS/SISS.db");
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButtonREG_clicked()
{
    if (!sqlitedb.open()) {
        qDebug() << "Database is not Connected";
        qDebug() << "Error:" << sqlitedb.lastError().text(); // Print the error message
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
        return;
    }

    qDebug () << "Database is Connected";
    // Check if table "LoginUser" exists, create it if it doesn't
    if (!sqlitedb.tables().contains("LoginUser")) {
        QSqlQuery query;
        QString createTableQuery = "CREATE TABLE LoginUser (username TEXT, password TEXT, email TEXT)";
        if (!query.exec(createTableQuery)) {
            qDebug() << "Error creating table:" << query.lastError().text();
            return;
        }
    }

    QString username = ui->LEUN->text();
    QString password = ui->LEPASS->text();
    QString email = ui->LEEMAIL->text();

    QSqlQuery qry;
    qry.prepare("INSERT INTO LoginUser (username, password, email) VALUES (:username, :password, :email)");
    qry.bindValue(":username", username);
    qry.bindValue(":password", password);
    qry.bindValue(":email", email);

    if (qry.exec()) {
        QMessageBox::information(this, "Inserted", "Data Inserted Successfully");
        this->hide();
        MainWindow *mainwindow = new MainWindow();
        mainwindow->show();
    }
    else {
        QMessageBox::information(this, "Not Inserted", "Data Is Not Inserted");

    }
}

void SignUp::on_pushButton_clicked()
{
    this->hide();
    MainWindow *mainwindow = new MainWindow();
    mainwindow->show();
}


