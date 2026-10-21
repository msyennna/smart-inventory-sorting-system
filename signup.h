#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include <QtSql/QtSql>
#include <QMessageBox>
#include <QApplication>
#include <QSqlQuery>
#include <QSqlDatabase>


namespace Ui {
class SignUp;
}

class SignUp : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_PBregister_clicked();
    void on_PBlogin_clicked();

private:
    Ui::SignUp *ui;
    QSqlDatabase sqlitedb;
    QSqlDatabase database;
};

#endif // SIGNUP_H
