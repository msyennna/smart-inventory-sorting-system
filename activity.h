#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QApplication>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QInputDialog>
#include "qitemselectionmodel.h"

namespace Ui {
class Activity;
}

class Activity : public QMainWindow
{
    Q_OBJECT

public:
    explicit Activity(QWidget *parent = nullptr);
    ~Activity();
    void setUsername(const QString& name);



private slots:
    void on_PBhome_clicked();
    void on_PBwarehouse_clicked();
    void on_PBsettings_clicked();
    void on_tableView_selectionChanged(const QItemSelection &selected);
    void updateTableView();

    void on_PBcreate_clicked();

    void on_PBupdate_clicked();

    void on_PBdelete_clicked();


private:
    Ui::Activity *ui;
    QSqlDatabase sqlitedb;

    QStandardItemModel *model;
    QString originalProductName;
    QString originalTimestamp;
    QString originalPrice;
    QString originalSize;
    QString originalSection;
    QString originalQuantity;
    QMessageBox *msg;
    void createTable();
    void clearFields();


    static QString m_username; // Declare the static member variable
    void showNameFromDatabase();
};

#endif // ACTIVITY_H
