#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QApplication>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QInputDialog>
#include "qitemselectionmodel.h"
namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private slots:
    void on_pushButtoncreate_clicked();
    void on_pushButtonupdate_clicked();
    void on_pushButtondelete_clicked();
    void on_tableView_selectionChanged(const QItemSelection &selected);
    void updateTableView();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainPage *ui;
    QSqlDatabase db;
    QSqlDatabase sqlitedb;

    QStandardItemModel *model;
    QString originalProductName;
    QString originalTimestamp;
    QString originalPrice;
    QString originalSize;
    QMessageBox *msg;
    void createTable();
    void clearFields();
};

#endif // MAINPAGE_H
