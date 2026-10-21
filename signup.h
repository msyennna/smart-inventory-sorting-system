#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include <QtSql/QtSql>
#include <QMainWindow>
#include <QMessageBox>
#include <QApplication>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>



namespace Ui {
class SignUp;
}

class SignUp : public QWidget
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_pushButtonREG_clicked();

    void on_pushButton_clicked();

private:
    Ui::SignUp *ui;
    QSqlDatabase database;
    QSqlDatabase DBconnection;
    QSqlDatabase sqlitedb;
};

#endif // SIGNUP_H
