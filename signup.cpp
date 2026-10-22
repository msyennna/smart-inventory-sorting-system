#include "signup.h"
#include "ui_signup.h"

#include "login.h"

SignUp::SignUp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
    ui->LEFN->setPlaceholderText("Ex: John Doe");
    ui->LEEMAIL->setPlaceholderText("Ex: abc@gmail.com");
    ui->LEPASS->setPlaceholderText("••••••••");


    sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Qt/SQLiteStudio/SISS.db");
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_PBregister_clicked()
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
        QString createTableQuery = "CREATE TABLE LoginUser (name TEXT, email TEXT, password TEXT)";
        if (!query.exec(createTableQuery)) {
            qDebug() << "Error creating table:" << query.lastError().text();
            return;
        }
    }

    QString name = ui->LEFN->text();
    QString password = ui->LEPASS->text();
    QString email = ui->LEEMAIL->text();

    QSqlQuery qry;
    qry.prepare("INSERT INTO LoginUser (name, email, password) VALUES (:name, :email, :password)");
    qry.bindValue(":name", name);
    qry.bindValue(":email", email);
    qry.bindValue(":password", password);


    if (qry.exec()) {
        QMessageBox::information(this, "Inserted", "Data Inserted Successfully");
        this->hide();
        LogIn *login = new LogIn();
        login->show();
    }
    else {
        QMessageBox::information(this, "Not Inserted", "Data Is Not Inserted");

    }
}


void SignUp::on_PBlogin_clicked()
{
    this->hide();
    LogIn *login = new LogIn();
    login->show();
}

