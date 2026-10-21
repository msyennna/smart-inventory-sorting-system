#include "homepage.h"
#include "ui_homepage.h"

#include "area.h"
#include "settings.h"
#include "mainpage.h"

HomePage::HomePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_pushButton_clicked()
{
    this->hide();
    MainPage *activity = new MainPage();
    activity->show();
}


void HomePage::on_pushButton_2_clicked()
{
    this->hide();
    Area *activity = new Area();
    activity->show();
}


void HomePage::on_pushButton_3_clicked()
{
    this->hide();
    Settings *profile = new Settings();
    profile->show();
}

