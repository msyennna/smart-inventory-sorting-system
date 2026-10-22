/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *centralwidget;
    QLabel *label_10;
    QLabel *labelname;
    QLabel *label_13;
    QLabel *label_9;
    QPushButton *PBhome;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *PBactivity;
    QPushButton *PBwarehouse;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label;

    void setupUi(QMainWindow *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName("Settings");
        Settings->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        Settings->setWindowIcon(icon);
        Settings->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"	border-image: url(:/images/images/set.png);}"));
        centralwidget = new QWidget(Settings);
        centralwidget->setObjectName("centralwidget");
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1130, 90, 151, 31));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        label_10->setFont(font);
        labelname = new QLabel(centralwidget);
        labelname->setObjectName("labelname");
        labelname->setGeometry(QRect(550, 150, 240, 30));
        labelname->setFont(font);
        labelname->setFrameShadow(QFrame::Sunken);
        labelname->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(1130, 620, 63, 20));
        QFont font1;
        font1.setBold(true);
        label_13->setFont(font1);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(1130, 220, 63, 20));
        label_9->setFont(font1);
        PBhome = new QPushButton(centralwidget);
        PBhome->setObjectName("PBhome");
        PBhome->setGeometry(QRect(80, 65, 210, 50));
        PBhome->setFlat(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1130, 320, 63, 20));
        label_3->setFont(font1);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(1130, 190, 151, 31));
        label_8->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(1130, 490, 151, 31));
        label_5->setFont(font);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(1130, 120, 63, 20));
        label_11->setFont(font1);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(1130, 590, 151, 31));
        label_12->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1130, 420, 63, 20));
        label_2->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 670, 83, 29));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Heading Semibold")});
        pushButton->setFont(font2);
        pushButton->setFlat(true);
        PBactivity = new QPushButton(centralwidget);
        PBactivity->setObjectName("PBactivity");
        PBactivity->setGeometry(QRect(80, 175, 210, 50));
        PBactivity->setFlat(true);
        PBwarehouse = new QPushButton(centralwidget);
        PBwarehouse->setObjectName("PBwarehouse");
        PBwarehouse->setGeometry(QRect(80, 120, 210, 50));
        PBwarehouse->setFlat(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(1130, 290, 151, 31));
        label_7->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1130, 390, 151, 31));
        label_6->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(1130, 520, 63, 20));
        label->setFont(font1);
        Settings->setCentralWidget(centralwidget);

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QMainWindow *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Settings", nullptr));
        label_10->setText(QCoreApplication::translate("Settings", "Gizby", nullptr));
        labelname->setText(QString());
        label_13->setText(QCoreApplication::translate("Settings", "User", nullptr));
        label_9->setText(QCoreApplication::translate("Settings", "User", nullptr));
        PBhome->setText(QString());
        label_3->setText(QCoreApplication::translate("Settings", "User", nullptr));
        label_8->setText(QCoreApplication::translate("Settings", "Gizlie", nullptr));
        label_5->setText(QCoreApplication::translate("Settings", "Jaber Loaf", nullptr));
        label_11->setText(QCoreApplication::translate("Settings", "User", nullptr));
        label_12->setText(QCoreApplication::translate("Settings", "Eepy car", nullptr));
        label_2->setText(QCoreApplication::translate("Settings", "User", nullptr));
        pushButton->setText(QCoreApplication::translate("Settings", "Log Out", nullptr));
        PBactivity->setText(QString());
        PBwarehouse->setText(QString());
        label_7->setText(QCoreApplication::translate("Settings", "Gizzy", nullptr));
        label_6->setText(QCoreApplication::translate("Settings", "Huh car", nullptr));
        label->setText(QCoreApplication::translate("Settings", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
