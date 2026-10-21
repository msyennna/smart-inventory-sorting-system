#include "settings.h"
#include "ui_settings.h"

#include "homepage.h"
#include "area.h"
#include "settings.h"
#include "mainpage.h"

Settings::Settings(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_pushButton_clicked()
{
    this->hide();
    HomePage *home = new HomePage();
    home->show();
}


void Settings::on_pushButton_2_clicked()
{
    this->hide();
    Area *activity = new Area();
    activity->show();
}


void Settings::on_pushButton_3_clicked()
{
    this->hide();
    MainPage *act = new MainPage();
    act->show();
}

