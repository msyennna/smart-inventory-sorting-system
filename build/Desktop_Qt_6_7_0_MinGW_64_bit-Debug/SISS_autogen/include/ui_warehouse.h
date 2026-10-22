/********************************************************************************
** Form generated from reading UI file 'warehouse.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAREHOUSE_H
#define UI_WAREHOUSE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Warehouse
{
public:
    QWidget *centralwidget;
    QPushButton *PB7;
    QPushButton *PB8;
    QPushButton *PBact;
    QLabel *label_3;
    QPushButton *PB1;
    QPushButton *PB5;
    QPushButton *PB6;
    QPushButton *PBsettings;
    QPushButton *PB9;
    QPushButton *PB4;
    QPushButton *PB12;
    QLabel *dataLabel;
    QPushButton *PB2;
    QPushButton *PB11;
    QPushButton *PB10;
    QLabel *labelname;
    QPushButton *PB3;
    QPushButton *PBhome;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QComboBox *comboBox2;

    void setupUi(QMainWindow *Warehouse)
    {
        if (Warehouse->objectName().isEmpty())
            Warehouse->setObjectName("Warehouse");
        Warehouse->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        Warehouse->setWindowIcon(icon);
        Warehouse->setStyleSheet(QString::fromUtf8("#centralwidget { \n"
"	border-image: url(:/images/images/ware.png);}\n"
"\n"
"#PB1 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
"#PB2 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
"#PB3 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
"#PB4 {color: rgb(255, 255, 255);\n"
"background-color: rgb(116, 105, 90);}\n"
"#PB5 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
"#PB6 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
"#PB7 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
"#PB8 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
"#PB9 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
"#PB10 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
"#PB11 {color: rgb(255, 255, 255);\n"
"background-color: rgb(116, 105, 90);}\n"
"#PB12 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(Warehouse);
        centralwidget->setObjectName("centralwidget");
        PB7 = new QPushButton(centralwidget);
        PB7->setObjectName("PB7");
        PB7->setGeometry(QRect(598, 630, 91, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        PB7->setFont(font);
        PB7->setFlat(true);
        PB8 = new QPushButton(centralwidget);
        PB8->setObjectName("PB8");
        PB8->setGeometry(QRect(410, 470, 81, 51));
        PB8->setFont(font);
        PB8->setFlat(true);
        PBact = new QPushButton(centralwidget);
        PBact->setObjectName("PBact");
        PBact->setGeometry(QRect(80, 120, 210, 50));
        PBact->setFlat(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 120, 141, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("8514oem")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_3->setFont(font1);
        PB1 = new QPushButton(centralwidget);
        PB1->setObjectName("PB1");
        PB1->setGeometry(QRect(510, 270, 81, 51));
        PB1->setFont(font);
        PB1->setStyleSheet(QString::fromUtf8("#PB1 {color: rgb(255, 255, 255);\n"
"background-color: rgb(43, 42, 42);}\n"
""));
        PB1->setFlat(true);
        PB5 = new QPushButton(centralwidget);
        PB5->setObjectName("PB5");
        PB5->setGeometry(QRect(798, 540, 51, 31));
        QFont font2;
        font2.setPointSize(7);
        font2.setBold(true);
        PB5->setFont(font2);
        PB5->setFlat(true);
        PB6 = new QPushButton(centralwidget);
        PB6->setObjectName("PB6");
        PB6->setGeometry(QRect(498, 530, 91, 61));
        PB6->setFont(font);
        PB6->setFlat(true);
        PBsettings = new QPushButton(centralwidget);
        PBsettings->setObjectName("PBsettings");
        PBsettings->setGeometry(QRect(80, 230, 210, 50));
        PBsettings->setFlat(true);
        PB9 = new QPushButton(centralwidget);
        PB9->setObjectName("PB9");
        PB9->setGeometry(QRect(670, 550, 91, 51));
        PB9->setFont(font);
        PB9->setFlat(true);
        PB4 = new QPushButton(centralwidget);
        PB4->setObjectName("PB4");
        PB4->setGeometry(QRect(658, 338, 41, 21));
        QFont font3;
        font3.setPointSize(6);
        font3.setBold(true);
        PB4->setFont(font3);
        PB4->setFlat(true);
        PB12 = new QPushButton(centralwidget);
        PB12->setObjectName("PB12");
        PB12->setGeometry(QRect(700, 502, 51, 31));
        PB12->setFont(font2);
        PB12->setFlat(true);
        dataLabel = new QLabel(centralwidget);
        dataLabel->setObjectName("dataLabel");
        dataLabel->setGeometry(QRect(440, 150, 241, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sitka Banner Semibold")});
        font4.setPointSize(16);
        font4.setBold(true);
        dataLabel->setFont(font4);
        dataLabel->setFrameShape(QFrame::Panel);
        PB2 = new QPushButton(centralwidget);
        PB2->setObjectName("PB2");
        PB2->setGeometry(QRect(610, 270, 81, 51));
        PB2->setFont(font);
        PB2->setFlat(true);
        PB11 = new QPushButton(centralwidget);
        PB11->setObjectName("PB11");
        PB11->setGeometry(QRect(736, 298, 41, 31));
        QFont font5;
        font5.setPointSize(5);
        font5.setBold(true);
        PB11->setFont(font5);
        PB11->setFlat(true);
        PB10 = new QPushButton(centralwidget);
        PB10->setObjectName("PB10");
        PB10->setGeometry(QRect(831, 589, 91, 51));
        PB10->setFont(font);
        PB10->setFlat(true);
        labelname = new QLabel(centralwidget);
        labelname->setObjectName("labelname");
        labelname->setGeometry(QRect(1035, 206, 240, 30));
        QFont font6;
        font6.setPointSize(13);
        font6.setBold(true);
        labelname->setFont(font6);
        labelname->setFrameShadow(QFrame::Sunken);
        labelname->setAlignment(Qt::AlignCenter);
        PB3 = new QPushButton(centralwidget);
        PB3->setObjectName("PB3");
        PB3->setGeometry(QRect(408, 350, 91, 51));
        PB3->setFont(font);
        PB3->setFlat(true);
        PBhome = new QPushButton(centralwidget);
        PBhome->setObjectName("PBhome");
        PBhome->setGeometry(QRect(80, 65, 210, 50));
        PBhome->setFlat(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(710, 140, 201, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 20px;\n"
"	\n"
"	background-color: rgb(255, 162, 119);\n"
"\n"
"background-radius: 10px ;\n"
"color: white;\n"
"	border-color: rgb(245, 237, 255);\n"
"\n"
"\n"
"	border-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:Hover{background-color: rgb(252, 128, 83);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(440, 60, 481, 62));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font7;
        font7.setFamilies({QString::fromUtf8("8514oem")});
        font7.setPointSize(9);
        font7.setBold(true);
        label_2->setFont(font7);

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: white;\n"
"	border-color: white;\n"
"	background-color: rgb(255, 85, 0);\n"
"\n"
"	border-color: rgb(255, 255, 255);\n"
"height: 25px;\n"
"}\n"
"\n"
"QComboBox:Hover{\n"
"	background-color: rgb(252, 128, 83);\n"
"color:white;\n"
"\n"
"\n"
"}"));
        comboBox->setFrame(true);

        verticalLayout->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font7);

        verticalLayout_2->addWidget(label_4);

        comboBox2 = new QComboBox(widget);
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->setObjectName("comboBox2");
        comboBox2->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: white;\n"
"	border-color: white;\n"
"	background-color: rgb(255, 85, 0);\n"
"\n"
"	border-color: rgb(255, 255, 255);\n"
"height: 25px;\n"
"}\n"
"\n"
"QComboBox:Hover{\n"
"	background-color: rgb(252, 128, 83);\n"
"color:white;\n"
"\n"
"\n"
"}"));

        verticalLayout_2->addWidget(comboBox2);


        horizontalLayout->addLayout(verticalLayout_2);

        Warehouse->setCentralWidget(centralwidget);

        retranslateUi(Warehouse);

        QMetaObject::connectSlotsByName(Warehouse);
    } // setupUi

    void retranslateUi(QMainWindow *Warehouse)
    {
        Warehouse->setWindowTitle(QCoreApplication::translate("Warehouse", "Warehouse", nullptr));
        PB7->setText(QCoreApplication::translate("Warehouse", "AREA 7", nullptr));
        PB8->setText(QCoreApplication::translate("Warehouse", "AREA 8", nullptr));
        PBact->setText(QString());
        label_3->setText(QCoreApplication::translate("Warehouse", "Status:", nullptr));
        PB1->setText(QCoreApplication::translate("Warehouse", "AREA 1", nullptr));
        PB5->setText(QCoreApplication::translate("Warehouse", "AREA 5", nullptr));
        PB6->setText(QCoreApplication::translate("Warehouse", "AREA 6", nullptr));
        PBsettings->setText(QString());
        PB9->setText(QCoreApplication::translate("Warehouse", "AREA 9", nullptr));
        PB4->setText(QCoreApplication::translate("Warehouse", "AREA 4", nullptr));
        PB12->setText(QCoreApplication::translate("Warehouse", "AREA 12", nullptr));
        dataLabel->setText(QString());
        PB2->setText(QCoreApplication::translate("Warehouse", "AREA 2", nullptr));
        PB11->setText(QCoreApplication::translate("Warehouse", "AREA 11", nullptr));
        PB10->setText(QCoreApplication::translate("Warehouse", "AREA 10", nullptr));
        labelname->setText(QString());
        PB3->setText(QCoreApplication::translate("Warehouse", "AREA 3", nullptr));
        PBhome->setText(QString());
        pushButton->setText(QCoreApplication::translate("Warehouse", "SAVE", nullptr));
        label_2->setText(QCoreApplication::translate("Warehouse", "Section :", nullptr));
        label_4->setText(QCoreApplication::translate("Warehouse", "Availability :", nullptr));
        comboBox2->setItemText(0, QCoreApplication::translate("Warehouse", "Occupied", nullptr));
        comboBox2->setItemText(1, QCoreApplication::translate("Warehouse", "Not Occupied", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Warehouse: public Ui_Warehouse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAREHOUSE_H
