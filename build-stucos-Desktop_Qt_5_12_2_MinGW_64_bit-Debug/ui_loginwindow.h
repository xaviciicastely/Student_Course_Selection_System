/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loginwindow
{
public:
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *loginButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *exitButton;

    void setupUi(QWidget *Loginwindow)
    {
        if (Loginwindow->objectName().isEmpty())
            Loginwindow->setObjectName(QString::fromUtf8("Loginwindow"));
        Loginwindow->resize(510, 311);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        Loginwindow->setWindowIcon(icon);
        Loginwindow->setStyleSheet(QString::fromUtf8("*{\n"
"background:rgb(255, 255, 255);\n"
"font-size:15px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"#frame{\n"
"border:sold 10px rgba(0,0,0);\n"
"border-image:url(:/new/prefix1/img/3.png)\n"
"}\n"
"QLineEdit{\n"
"color:#8d98a1;\n"
"background-color:#405361;\n"
"font-size:18px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton{\n"
"background:#ced1d8;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(224,0,0);\n"
"border-style:inset;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QCheckBox{\n"
"background:rgba(85,170,255,0);\n"
"color:white;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QLabel{\n"
"background:rgba(85,170,255,0);\n"
"color:white;\n"
"font-style:MingLiU-ExtB;\n"
"font-size:14px;\n"
"}\n"
""));
        frame = new QFrame(Loginwindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 511, 311));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 70, 231, 41));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 130, 231, 41));
        loginButton = new QPushButton(frame);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(330, 70, 121, 41));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 331, 31));
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-10, 0, 81, 61));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/img/4.png);"));
        exitButton = new QPushButton(frame);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(330, 130, 121, 41));

        retranslateUi(Loginwindow);

        QMetaObject::connectSlotsByName(Loginwindow);
    } // setupUi

    void retranslateUi(QWidget *Loginwindow)
    {
        Loginwindow->setWindowTitle(QApplication::translate("Loginwindow", "\345\255\246\347\224\237\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("Loginwindow", "\345\255\246\345\217\267", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("Loginwindow", "\345\257\206\347\240\201", nullptr));
        loginButton->setText(QApplication::translate("Loginwindow", "\347\231\273\351\231\206", nullptr));
        label->setText(QApplication::translate("Loginwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">\346\254\242\350\277\216\347\231\273\351\231\206\345\255\246\347\224\237\351\200\211\350\257\276\347\263\273\347\273\237</span></p></body></html>", nullptr));
        label_2->setText(QString());
        exitButton->setText(QApplication::translate("Loginwindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loginwindow: public Ui_Loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
