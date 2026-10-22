/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QWidget *centralwidget;
    QPushButton *PBcancel;
    QLineEdit *lineEditEmail;
    QPushButton *PBlogin;
    QLineEdit *lineEditPass;
    QPushButton *PBsignup;
    QFrame *frame;

    void setupUi(QMainWindow *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName("LogIn");
        LogIn->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        LogIn->setWindowIcon(icon);
        LogIn->setStyleSheet(QString::fromUtf8("#centralwidget { \n"
"	\n"
"	border-image: url(:/images/images/1.png);}\n"
""));
        centralwidget = new QWidget(LogIn);
        centralwidget->setObjectName("centralwidget");
        PBcancel = new QPushButton(centralwidget);
        PBcancel->setObjectName("PBcancel");
        PBcancel->setGeometry(QRect(1050, 390, 191, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setKerning(false);
        PBcancel->setFont(font);
        PBcancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 20px;\n"
"	background-color: rgb(55, 54, 54);\n"
"\n"
"background-radius: 10px ;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background-color: rgb(78, 79, 80);\n"
"}\n"
"\n"
"\n"
""));
        PBcancel->setFlat(true);
        lineEditEmail = new QLineEdit(centralwidget);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setGeometry(QRect(870, 220, 370, 40));
        lineEditEmail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border-radius: 10px;\n"
"   background-color: dark gray;\n"
"   padding-left: 15px;\n"
"   padding-right: 15px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"  \n"
"   background:transparent;\n"
"\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
" border-color:orange;\n"
"}\n"
""));
        lineEditEmail->setFrame(false);
        lineEditEmail->setEchoMode(QLineEdit::Normal);
        PBlogin = new QPushButton(centralwidget);
        PBlogin->setObjectName("PBlogin");
        PBlogin->setGeometry(QRect(840, 390, 191, 51));
        PBlogin->setFont(font);
        PBlogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 20px;\n"
"	background-color: rgb(55, 54, 54);\n"
"\n"
"background-radius: 10px ;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background-color: rgb(78, 79, 80);\n"
"}\n"
"\n"
"\n"
""));
        PBlogin->setFlat(true);
        lineEditPass = new QLineEdit(centralwidget);
        lineEditPass->setObjectName("lineEditPass");
        lineEditPass->setGeometry(QRect(870, 300, 370, 40));
        QFont font1;
        font1.setKerning(false);
        font1.setHintingPreference(QFont::PreferVerticalHinting);
        lineEditPass->setFont(font1);
        lineEditPass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border-radius: 10px;\n"
"   background-color: dark gray;\n"
"   padding-left: 15px;\n"
"   padding-right: 15px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"  \n"
"   background:transparent;\n"
"\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
" border-color:orange;\n"
"}\n"
""));
        lineEditPass->setFrame(false);
        lineEditPass->setEchoMode(QLineEdit::Password);
        PBsignup = new QPushButton(centralwidget);
        PBsignup->setObjectName("PBsignup");
        PBsignup->setGeometry(QRect(1093, 633, 71, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Heading Semibold")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setUnderline(true);
        font2.setStrikeOut(false);
        font2.setKerning(false);
        font2.setHintingPreference(QFont::PreferFullHinting);
        PBsignup->setFont(font2);
        PBsignup->setAcceptDrops(false);
        PBsignup->setFlat(true);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(1220, 10, 50, 50));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/images/images/7.png);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        LogIn->setCentralWidget(centralwidget);

        retranslateUi(LogIn);

        PBsignup->setDefault(false);


        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QMainWindow *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "LogIn", nullptr));
        PBcancel->setText(QCoreApplication::translate("LogIn", "Cancel", nullptr));
        PBlogin->setText(QCoreApplication::translate("LogIn", "Login", nullptr));
        PBsignup->setText(QCoreApplication::translate("LogIn", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
