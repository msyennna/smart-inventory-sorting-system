#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>

namespace Ui {
class Warehouse;
}

class Warehouse : public QMainWindow
{
    Q_OBJECT

public:
    explicit Warehouse(QWidget *parent = nullptr);
    ~Warehouse();
    void setUsername(const QString& name);

private slots:
    void saveData();
    void showDataArea1();
    void showDataArea2();
    void showDataArea3();
    void showDataArea4();
    void showDataArea5();
    void showDataArea6();
    void showDataArea7();
    void showDataArea8();
    void showDataArea9();
    void showDataArea10();
    void showDataArea11();
    void showDataArea12();
    void on_PBhome_clicked();
    void on_PBact_clicked();
    void on_PBsettings_clicked();

private:
    Ui::Warehouse *ui;
    void fetchDataAndDisplay(const QString& areaName);

    static QString m_username; // Declare the static member variable
    void showNameFromDatabase();
};

#endif // WAREHOUSE_H
