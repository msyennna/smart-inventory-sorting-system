/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QPushButton *PBlogin;
    QLineEdit *LEPASS;
    QLineEdit *LEEMAIL;
    QLineEdit *LEFN;
    QPushButton *PBregister;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        SignUp->setWindowIcon(icon);
        SignUp->setStyleSheet(QString::fromUtf8("#centralwidget { \n"
"	border-image: url(:/images/images/6.png);}"));
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName("centralwidget");
        PBlogin = new QPushButton(centralwidget);
        PBlogin->setObjectName("PBlogin");
        PBlogin->setGeometry(QRect(690, 636, 51, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Heading Semibold")});
        font.setWeight(QFont::ExtraLight);
        font.setItalic(false);
        font.setUnderline(true);
        font.setStrikeOut(false);
        font.setKerning(false);
        font.setHintingPreference(QFont::PreferVerticalHinting);
        PBlogin->setFont(font);
        PBlogin->setFocusPolicy(Qt::NoFocus);
        PBlogin->setAcceptDrops(false);
        PBlogin->setCheckable(false);
        PBlogin->setFlat(true);
        LEPASS = new QLineEdit(centralwidget);
        LEPASS->setObjectName("LEPASS");
        LEPASS->setGeometry(QRect(470, 453, 370, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Variable Text")});
        LEPASS->setFont(font1);
        LEPASS->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"  \n"
"   background:transparent;\n"
"\n"
"}"));
        LEPASS->setFrame(false);
        LEPASS->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        LEEMAIL = new QLineEdit(centralwidget);
        LEEMAIL->setObjectName("LEEMAIL");
        LEEMAIL->setGeometry(QRect(470, 336, 370, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Variable Text")});
        font2.setKerning(true);
        LEEMAIL->setFont(font2);
        LEEMAIL->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"  \n"
"   background:transparent;\n"
"\n"
"}"));
        LEEMAIL->setFrame(false);
        LEEMAIL->setEchoMode(QLineEdit::Normal);
        LEFN = new QLineEdit(centralwidget);
        LEFN->setObjectName("LEFN");
        LEFN->setGeometry(QRect(470, 220, 370, 51));
        LEFN->setFont(font1);
        LEFN->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"  \n"
"   background:transparent;\n"
"\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
" border-color:orange;\n"
"}"));
        LEFN->setFrame(false);
        PBregister = new QPushButton(centralwidget);
        PBregister->setObjectName("PBregister");
        PBregister->setGeometry(QRect(418, 529, 441, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Variable Display")});
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setStrikeOut(false);
        PBregister->setFont(font3);
        PBregister->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        PBregister->setFlat(true);
        SignUp->setCentralWidget(centralwidget);

        retranslateUi(SignUp);

        PBlogin->setDefault(false);


        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QMainWindow *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "SignUp", nullptr));
        PBlogin->setText(QCoreApplication::translate("SignUp", "Login", nullptr));
        LEFN->setText(QString());
        PBregister->setText(QCoreApplication::translate("SignUp", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
