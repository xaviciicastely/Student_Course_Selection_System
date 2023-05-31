/********************************************************************************
** Form generated from reading UI file 'optionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONWINDOW_H
#define UI_OPTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Optionwindow
{
public:
    QFrame *frame;
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_2;
    QTextBrowser *textBrowser_2;
    QPushButton *enterButton_2;
    QFrame *frame_3;
    QLabel *label_3;
    QTextBrowser *textBrowser_3;
    QPushButton *enterButton_3;
    QFrame *frame_4;
    QLabel *label_4;
    QTextBrowser *textBrowser_4;
    QPushButton *enterButton_4;
    QLabel *logo;
    QFrame *frame_5;
    QLabel *label_7;
    QTextBrowser *textBrowser_6;
    QPushButton *enterButton_5;

    void setupUi(QWidget *Optionwindow)
    {
        if (Optionwindow->objectName().isEmpty())
            Optionwindow->setObjectName(QString::fromUtf8("Optionwindow"));
        Optionwindow->resize(681, 351);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        Optionwindow->setWindowIcon(icon);
        Optionwindow->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Optionwindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 681, 351));
        frame->setStyleSheet(QString::fromUtf8("#frame\n"
"{\n"
"border-image: url(:/new/prefix1/img/1.jpg);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 20, 231, 41));
        label->setStyleSheet(QString::fromUtf8(""));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 110, 151, 101));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 151, 21));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(40, 104, 166,0.8);\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        textBrowser_2 = new QTextBrowser(frame_2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 20, 151, 81));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color: rgba(90, 166, 210,0.8);\n"
"font: 9pt \"\347\255\211\347\272\277\";"));
        enterButton_2 = new QPushButton(frame_2);
        enterButton_2->setObjectName(QString::fromUtf8("enterButton_2"));
        enterButton_2->setGeometry(QRect(-10, 70, 171, 31));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(180, 110, 151, 101));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 151, 21));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(40, 104, 166,0.8);\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        textBrowser_3 = new QTextBrowser(frame_3);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 20, 151, 81));
        textBrowser_3->setStyleSheet(QString::fromUtf8("background-color: rgba(90, 166, 210,0.8);\n"
"font: 9pt \"\347\255\211\347\272\277\";"));
        enterButton_3 = new QPushButton(frame_3);
        enterButton_3->setObjectName(QString::fromUtf8("enterButton_3"));
        enterButton_3->setGeometry(QRect(-10, 70, 171, 31));
        enterButton_3->setStyleSheet(QString::fromUtf8(""));
        textBrowser_3->raise();
        label_3->raise();
        enterButton_3->raise();
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(350, 110, 151, 101));
        frame_4->setStyleSheet(QString::fromUtf8(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 151, 21));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(40, 104, 166,0.8);\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        textBrowser_4 = new QTextBrowser(frame_4);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(0, 20, 151, 81));
        textBrowser_4->setStyleSheet(QString::fromUtf8("background-color: rgba(90, 166, 210,0.8);\n"
"font: 9pt \"\347\255\211\347\272\277\";"));
        enterButton_4 = new QPushButton(frame_4);
        enterButton_4->setObjectName(QString::fromUtf8("enterButton_4"));
        enterButton_4->setGeometry(QRect(-10, 70, 171, 31));
        textBrowser_4->raise();
        label_4->raise();
        enterButton_4->raise();
        logo = new QLabel(frame);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(0, 0, 71, 71));
        logo->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/img/4.png);"));
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(520, 110, 151, 101));
        frame_5->setStyleSheet(QString::fromUtf8(""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 0, 151, 21));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(40, 104, 166,0.8);\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        textBrowser_6 = new QTextBrowser(frame_5);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(0, 20, 151, 81));
        textBrowser_6->setStyleSheet(QString::fromUtf8("background-color: rgba(90, 166, 210,0.8);\n"
"font: 9pt \"\347\255\211\347\272\277\";"));
        enterButton_5 = new QPushButton(frame_5);
        enterButton_5->setObjectName(QString::fromUtf8("enterButton_5"));
        enterButton_5->setGeometry(QRect(-10, 70, 171, 31));

        retranslateUi(Optionwindow);

        QMetaObject::connectSlotsByName(Optionwindow);
    } // setupUi

    void retranslateUi(QWidget *Optionwindow)
    {
        Optionwindow->setWindowTitle(QApplication::translate("Optionwindow", "\345\255\246\347\224\237\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        label->setText(QApplication::translate("Optionwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Optionwindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">\351\200\211\350\257\276</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QApplication::translate("Optionwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\347\255\211\347\272\277'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\240\271\346\215\256\351\200\211\350\257\276\347\263\273\347\273\237\345\274\200\346\224\276\346\227\266\351\227\264\357\274\214\350\277\233\350\241\214\345\255\246\346\234\237\351\200\211\350\257\276</p></body></html>", nullptr));
        enterButton_2->setText(QApplication::translate("Optionwindow", ">\347\202\271\345\207\273\350\277\233\345\205\245>", nullptr));
        label_3->setText(QApplication::translate("Optionwindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">\346\210\221\347\232\204\351\200\211\350\257\276\346\227\245\345\277\227</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QApplication::translate("Optionwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\347\255\211\347\272\277'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\234\250\351\200\211\350\257\276\345\255\246\346\234\237\346\234\254\344\272\272\346\211\200\346\223\215\344\275\234\347\232\204\346\211\200\346\234\211\351\200\211\350\257\276\347\272\252\345\275\225\350\257\246\346\203\205</p></body></html>", nullptr));
        enterButton_3->setText(QApplication::translate("Optionwindow", ">\347\202\271\345\207\273\350\277\233\345\205\245>", nullptr));
        label_4->setText(QApplication::translate("Optionwindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">\345\205\250\346\240\241\345\274\200\350\257\276\346\237\245\350\257\242</span></p></body></html>", nullptr));
        textBrowser_4->setHtml(QApplication::translate("Optionwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\347\255\211\347\272\277'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\205\250\346\240\241\345\220\204\344\270\252\344\270\223\344\270\232\345\234\250\351\200\211\350\257\276\345\255\246\346\234\237\345\274\200\345\207\272\347\232\204\350\257\276\347\250\213\350\257\246\346\203\205</p></body></html>", nullptr));
        enterButton_4->setText(QApplication::translate("Optionwindow", ">\347\202\271\345\207\273\350\277\233\345\205\245>", nullptr));
        logo->setText(QString());
        label_7->setText(QApplication::translate("Optionwindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">\346\210\221\347\232\204\350\257\276\350\241\250</span></p></body></html>", nullptr));
        textBrowser_6->setHtml(QApplication::translate("Optionwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\347\255\211\347\272\277'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\240\271\346\215\256\351\200\211\350\257\276\347\273\223\346\236\234\346\237\245\350\257\242\350\257\276\350\241\250</p></body></html>", nullptr));
        enterButton_5->setText(QApplication::translate("Optionwindow", ">\347\202\271\345\207\273\350\277\233\345\205\245>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Optionwindow: public Ui_Optionwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONWINDOW_H
