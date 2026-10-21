#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSql/QtSql>
#include <QMessageBox>
#include <QApplication>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui {
class LogIn;
}
QT_END_NAMESPACE

class LogIn : public QMainWindow
{
    Q_OBJECT

public:
    LogIn(QWidget *parent = nullptr);
    ~LogIn();

private slots:


    void on_PBlogin_clicked();

    void on_PBcancel_clicked();

    void on_PBsignup_clicked();

private:
    Ui::LogIn *ui;
    QSqlDatabase sqlitedb;
    void testDatabaseConnection();
};
#endif // LOGIN_H
