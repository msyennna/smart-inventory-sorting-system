#ifndef AREA_H
#define AREA_H

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>

namespace Ui {
class Area;
}

class Area : public QMainWindow
{
    Q_OBJECT

public:
    explicit Area(QWidget *parent = nullptr);
    ~Area();

private slots:

    void saveData();
    void showDataArea1();
    void showDataArea2();
    void showDataArea3();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Area *ui;
     void fetchDataAndDisplay(const QString& areaName);
};

#endif // AREA_H
