/********************************************************************************
** Form generated from reading UI file 'activity.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVITY_H
#define UI_ACTIVITY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Activity
{
public:
    QWidget *centralwidget;
    QPushButton *PBhome;
    QPushButton *PBsettings;
    QLabel *labelname;
    QPushButton *PBwarehouse;
    QLineEdit *LEQUANTITY;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QComboBox *CBFRAGILE;
    QLabel *label_7;
    QComboBox *CBCATEGORY;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QComboBox *CBSIZE;
    QLabel *label_8;
    QComboBox *CBSECTION;
    QTableView *tableView;
    QLineEdit *LEPRODUCT;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBcreate;
    QPushButton *PBupdate;
    QPushButton *PBdelete;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QMainWindow *Activity)
    {
        if (Activity->objectName().isEmpty())
            Activity->setObjectName("Activity");
        Activity->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        Activity->setWindowIcon(icon);
        Activity->setStyleSheet(QString::fromUtf8("#centralwidget { border-image: url(:/images/images/act.png);}"));
        centralwidget = new QWidget(Activity);
        centralwidget->setObjectName("centralwidget");
        PBhome = new QPushButton(centralwidget);
        PBhome->setObjectName("PBhome");
        PBhome->setGeometry(QRect(80, 65, 210, 50));
        PBhome->setFlat(true);
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
        PBwarehouse = new QPushButton(centralwidget);
        PBwarehouse->setObjectName("PBwarehouse");
        PBwarehouse->setGeometry(QRect(80, 175, 210, 50));
        PBwarehouse->setFlat(true);
        LEQUANTITY = new QLineEdit(centralwidget);
        LEQUANTITY->setObjectName("LEQUANTITY");
        LEQUANTITY->setGeometry(QRect(500, 150, 150, 35));
        LEQUANTITY->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-radius: 10px;\n"
"border-radius:3px;\n"
"padding-left: 2px;\n"
"padding-right: 2px;\n"
"	background-color: rgb(255, 162, 119);\n"
"\n"
"}"));
        LEQUANTITY->setFrame(false);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(660, 120, 311, 111));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(11, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Text Semibold")});
        font1.setPointSize(10);
        font1.setBold(true);
        label_2->setFont(font1);

        verticalLayout_8->addWidget(label_2);

        CBFRAGILE = new QComboBox(widget);
        CBFRAGILE->addItem(QString());
        CBFRAGILE->addItem(QString());
        CBFRAGILE->setObjectName("CBFRAGILE");
        CBFRAGILE->setStyleSheet(QString::fromUtf8("QComboBox{\n"
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
        CBFRAGILE->setFrame(false);

        verticalLayout_8->addWidget(CBFRAGILE);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        verticalLayout_8->addWidget(label_7);

        CBCATEGORY = new QComboBox(widget);
        CBCATEGORY->addItem(QString());
        CBCATEGORY->addItem(QString());
        CBCATEGORY->setObjectName("CBCATEGORY");
        CBCATEGORY->setStyleSheet(QString::fromUtf8("QComboBox{\n"
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
        CBCATEGORY->setFrame(false);

        verticalLayout_8->addWidget(CBCATEGORY);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        verticalLayout_9->addWidget(label_6);

        CBSIZE = new QComboBox(widget);
        CBSIZE->addItem(QString());
        CBSIZE->addItem(QString());
        CBSIZE->addItem(QString());
        CBSIZE->setObjectName("CBSIZE");
        CBSIZE->setStyleSheet(QString::fromUtf8("QComboBox{\n"
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
        CBSIZE->setFrame(false);

        verticalLayout_9->addWidget(CBSIZE);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        verticalLayout_9->addWidget(label_8);

        CBSECTION = new QComboBox(widget);
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->addItem(QString());
        CBSECTION->setObjectName("CBSECTION");
        CBSECTION->setStyleSheet(QString::fromUtf8("QComboBox{\n"
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
        CBSECTION->setFrame(false);

        verticalLayout_9->addWidget(CBSECTION);


        horizontalLayout_4->addLayout(verticalLayout_9);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(346, 236, 631, 181));
        tableView->setStyleSheet(QString::fromUtf8("QTableView{\n"
"border-color: white;\n"
"border-radius: 20px;\n"
"background-radius: 20px;\n"
"	background-color: rgb(252, 100, 45);\n"
"}"));
        tableView->setFrameShape(QFrame::StyledPanel);
        tableView->setFrameShadow(QFrame::Raised);
        LEPRODUCT = new QLineEdit(centralwidget);
        LEPRODUCT->setObjectName("LEPRODUCT");
        LEPRODUCT->setGeometry(QRect(340, 150, 150, 35));
        LEPRODUCT->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-radius: 10px;\n"
"border-radius:3px;\n"
"padding-left: 2px;\n"
"padding-right: 2px;\n"
"	background-color: rgb(255, 162, 119);\n"
"\n"
"}"));
        LEPRODUCT->setFrame(false);
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(340, 180, 321, 51));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        PBcreate = new QPushButton(widget1);
        PBcreate->setObjectName("PBcreate");
        QFont font2;
        font2.setBold(false);
        PBcreate->setFont(font2);
        PBcreate->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: white;\n"
"	border-color: white;\n"
"border-radius: 3px;\n"
"	background-color: rgb(255, 117, 71);\n"
"	border-color: rgb(255, 255, 255);\n"
"height: 25px;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background-color: rgb(252, 128, 83);\n"
"color:white;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(PBcreate);

        PBupdate = new QPushButton(widget1);
        PBupdate->setObjectName("PBupdate");
        PBupdate->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: white;\n"
"	border-color: white;\n"
"border-radius: 3px;\n"
"	background-color: rgb(255, 117, 71);\n"
"	border-color: rgb(255, 255, 255);\n"
"height: 25px;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background-color: rgb(252, 128, 83);\n"
"color:white;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(PBupdate);

        PBdelete = new QPushButton(widget1);
        PBdelete->setObjectName("PBdelete");
        PBdelete->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: white;\n"
"	border-color: white;\n"
"border-radius: 3px;\n"
"	background-color: rgb(255, 117, 71);\n"
"	border-color: rgb(255, 255, 255);\n"
"height: 25px;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background-color: rgb(252, 128, 83);\n"
"color:white;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(PBdelete);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout_4);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(340, 120, 321, 22));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget2);
        label_9->setObjectName("label_9");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka Text Semibold")});
        font3.setPointSize(12);
        font3.setBold(true);
        label_9->setFont(font3);

        horizontalLayout_2->addWidget(label_9);

        label_10 = new QLabel(widget2);
        label_10->setObjectName("label_10");
        label_10->setFont(font3);

        horizontalLayout_2->addWidget(label_10);

        Activity->setCentralWidget(centralwidget);

        retranslateUi(Activity);

        QMetaObject::connectSlotsByName(Activity);
    } // setupUi

    void retranslateUi(QMainWindow *Activity)
    {
        Activity->setWindowTitle(QCoreApplication::translate("Activity", "Activity", nullptr));
        PBhome->setText(QString());
        PBsettings->setText(QString());
        labelname->setText(QString());
        PBwarehouse->setText(QString());
        LEQUANTITY->setPlaceholderText(QCoreApplication::translate("Activity", "Enter Quantity", nullptr));
        label_2->setText(QCoreApplication::translate("Activity", "Fragility:", nullptr));
        CBFRAGILE->setItemText(0, QCoreApplication::translate("Activity", "Fragile", nullptr));
        CBFRAGILE->setItemText(1, QCoreApplication::translate("Activity", "Non-fragile", nullptr));

        CBFRAGILE->setPlaceholderText(QCoreApplication::translate("Activity", "Fragility", nullptr));
        label_7->setText(QCoreApplication::translate("Activity", "Category: ", nullptr));
        CBCATEGORY->setItemText(0, QCoreApplication::translate("Activity", "Light (<20kg)", nullptr));
        CBCATEGORY->setItemText(1, QCoreApplication::translate("Activity", "Heavy (>20kg)", nullptr));

        label_6->setText(QCoreApplication::translate("Activity", "Size:", nullptr));
        CBSIZE->setItemText(0, QCoreApplication::translate("Activity", "Small (30 cm x 20 cm x 10 cm)", nullptr));
        CBSIZE->setItemText(1, QCoreApplication::translate("Activity", "Medium (60 cm x 40 cm x 30 cm)", nullptr));
        CBSIZE->setItemText(2, QCoreApplication::translate("Activity", "Large (20 cm x 80 cm x 60 cm)", nullptr));

        label_8->setText(QCoreApplication::translate("Activity", "Section:", nullptr));
        CBSECTION->setItemText(0, QCoreApplication::translate("Activity", "Area 1", nullptr));
        CBSECTION->setItemText(1, QCoreApplication::translate("Activity", "Area 2", nullptr));
        CBSECTION->setItemText(2, QCoreApplication::translate("Activity", "Area 3", nullptr));
        CBSECTION->setItemText(3, QCoreApplication::translate("Activity", "Area 4", nullptr));
        CBSECTION->setItemText(4, QCoreApplication::translate("Activity", "Area 5", nullptr));
        CBSECTION->setItemText(5, QCoreApplication::translate("Activity", "Area 6", nullptr));
        CBSECTION->setItemText(6, QCoreApplication::translate("Activity", "Area 7", nullptr));
        CBSECTION->setItemText(7, QCoreApplication::translate("Activity", "Area 8", nullptr));
        CBSECTION->setItemText(8, QCoreApplication::translate("Activity", "Area 9", nullptr));
        CBSECTION->setItemText(9, QCoreApplication::translate("Activity", "Area 10", nullptr));
        CBSECTION->setItemText(10, QCoreApplication::translate("Activity", "Area 11", nullptr));
        CBSECTION->setItemText(11, QCoreApplication::translate("Activity", "Area 12", nullptr));

        LEPRODUCT->setPlaceholderText(QCoreApplication::translate("Activity", "Enter Product Name", nullptr));
        PBcreate->setText(QCoreApplication::translate("Activity", "Create", nullptr));
        PBupdate->setText(QCoreApplication::translate("Activity", "Update", nullptr));
        PBdelete->setText(QCoreApplication::translate("Activity", "Delete", nullptr));
        label_9->setText(QCoreApplication::translate("Activity", "Product Name:", nullptr));
        label_10->setText(QCoreApplication::translate("Activity", "Quantity:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Activity: public Ui_Activity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVITY_H
