/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralwidget;
    QPushButton *PBsettings;
    QLabel *labelname;
    QPushButton *PBactivity;
    QPushButton *PBwarehouse;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setWindowIcon(icon);
        Home->setStyleSheet(QString::fromUtf8("#centralwidget { \n"
"	border-image: url(:/images/images/home.png);}"));
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName("centralwidget");
        PBsettings = new QPushButton(centralwidget);
        PBsettings->setObjectName("PBsettings");
        PBsettings->setGeometry(QRect(80, 230, 210, 50));
        PBsettings->setFlat(true);
        labelname = new QLabel(centralwidget);
        labelname->setObjectName("labelname");
        labelname->setGeometry(QRect(1035, 206, 240, 30));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        labelname->setFont(font);
        labelname->setAlignment(Qt::AlignCenter);
        PBactivity = new QPushButton(centralwidget);
        PBactivity->setObjectName("PBactivity");
        PBactivity->setGeometry(QRect(80, 175, 210, 50));
        PBactivity->setFlat(true);
        PBwarehouse = new QPushButton(centralwidget);
        PBwarehouse->setObjectName("PBwarehouse");
        PBwarehouse->setGeometry(QRect(80, 120, 210, 50));
        PBwarehouse->setFlat(true);
        Home->setCentralWidget(centralwidget);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Home", nullptr));
        PBsettings->setText(QString());
        labelname->setText(QString());
        PBactivity->setText(QString());
        PBwarehouse->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
