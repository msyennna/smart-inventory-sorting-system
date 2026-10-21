#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMessageBox>
#include <QtSql/QtSql>
#include <QMainWindow>
#include <QMessageBox>
#include <QApplication>
#include <QSqlQuery>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonLogin_clicked();
    void on_pushButtonCancel_clicked();
    void testDatabaseConnection();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase database;
    QSqlDatabase DBconnection;
    QSqlDatabase sqlitedb;
};
#endif // MAINWINDOW_H
