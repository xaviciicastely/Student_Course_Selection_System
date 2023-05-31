/********************************************************************************
** Form generated from reading UI file 'selectionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTIONWINDOW_H
#define UI_SELECTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Selectionwindow
{
public:
    QFrame *frame;
    QTableWidget *tableWidget_2;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_5;
    QPushButton *selectButton;
    QPushButton *backButton;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *returnButton;
    QLabel *label_3;

    void setupUi(QWidget *Selectionwindow)
    {
        if (Selectionwindow->objectName().isEmpty())
            Selectionwindow->setObjectName(QString::fromUtf8("Selectionwindow"));
        Selectionwindow->resize(1189, 656);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        Selectionwindow->setWindowIcon(icon);
        Selectionwindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:#8d98a1;\n"
"background-color:rgb(225,225,225);\n"
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
"background-color:rgb(225,225,225);\n"
"border-style:inset;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        frame = new QFrame(Selectionwindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1191, 661));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/new/prefix1/img/5.png);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableWidget_2 = new QTableWidget(frame);
        if (tableWidget_2->columnCount() < 13)
            tableWidget_2->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 410, 1171, 241));
        tableWidget_2->setMaximumSize(QSize(1171, 16777215));
        tableWidget_2->setStyleSheet(QString::fromUtf8("#tableWidget_2{background-color:rgba(225,225,225,0.5);}\n"
""));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(540, 60, 131, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 13)
            tableWidget->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem25);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 100, 1171, 241));
        tableWidget->setMaximumSize(QSize(1171, 16777215));
        tableWidget->setStyleSheet(QString::fromUtf8("#tableWidget{background-color:rgba(225,225,225,0.5);}\n"
""));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(-20, 0, 121, 71));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/img/4.png);"));
        selectButton = new QPushButton(frame);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(1090, 60, 93, 31));
        selectButton->setStyleSheet(QString::fromUtf8("background-colour:rgba(225,225,225,1);"));
        backButton = new QPushButton(frame);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(1090, 10, 93, 31));
        backButton->setStyleSheet(QString::fromUtf8("background-colour:rgba(225,225,225,1);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 370, 161, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(225, 225, 225);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 370, 131, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        returnButton = new QPushButton(frame);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(1090, 370, 93, 28));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 370, 71, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(225, 225, 225);"));

        retranslateUi(Selectionwindow);

        QMetaObject::connectSlotsByName(Selectionwindow);
    } // setupUi

    void retranslateUi(QWidget *Selectionwindow)
    {
        Selectionwindow->setWindowTitle(QApplication::translate("Selectionwindow", "\345\255\246\347\224\237\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Selectionwindow", "\350\257\276\347\250\213\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Selectionwindow", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Selectionwindow", "\350\257\276\347\250\213\346\200\247\350\264\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Selectionwindow", "\344\270\212\350\257\276\351\231\242\347\263\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Selectionwindow", "\346\225\231\345\270\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Selectionwindow", "\350\201\214\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Selectionwindow", "\346\225\231\345\270\210\346\211\200\345\234\250\351\231\242\347\263\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Selectionwindow", "\345\255\246\346\227\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Selectionwindow", "\345\255\246\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Selectionwindow", "\350\257\276\347\250\213\345\256\271\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Selectionwindow", "\344\270\212\350\257\276\345\255\246\347\224\237\344\272\272\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("Selectionwindow", "\344\270\212\350\257\276\345\234\260\347\202\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("Selectionwindow", "\344\270\212\350\257\276\346\227\266\351\227\264", nullptr));
        label->setText(QApplication::translate("Selectionwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline; color:#000000;\">\345\217\257\344\277\256\350\257\276\347\250\213</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("Selectionwindow", "\350\257\276\347\250\213\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("Selectionwindow", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("Selectionwindow", "\350\257\276\347\250\213\346\200\247\350\264\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("Selectionwindow", "\344\270\212\350\257\276\351\231\242\347\263\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem17->setText(QApplication::translate("Selectionwindow", "\346\225\231\345\270\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem18->setText(QApplication::translate("Selectionwindow", "\350\201\214\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem19->setText(QApplication::translate("Selectionwindow", "\346\225\231\345\270\210\346\211\200\345\234\250\351\231\242\347\263\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem20->setText(QApplication::translate("Selectionwindow", "\345\255\246\346\227\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem21->setText(QApplication::translate("Selectionwindow", "\345\255\246\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem22->setText(QApplication::translate("Selectionwindow", "\350\257\276\347\250\213\345\256\271\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem23->setText(QApplication::translate("Selectionwindow", "\344\270\212\350\257\276\345\255\246\347\224\237\344\272\272\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem24->setText(QApplication::translate("Selectionwindow", "\344\270\212\350\257\276\345\234\260\347\202\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem25->setText(QApplication::translate("Selectionwindow", "\344\270\212\350\257\276\346\227\266\351\227\264", nullptr));
        label_5->setText(QString());
        selectButton->setText(QApplication::translate("Selectionwindow", "\351\200\211\350\257\276", nullptr));
        backButton->setText(QApplication::translate("Selectionwindow", "<<\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
        label_4->setText(QApplication::translate("Selectionwindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\275\223\345\211\215\345\267\262\351\200\211\350\257\276\347\250\213\345\255\246\345\210\206\345\222\214\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Selectionwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline; color:#000000;\">\345\267\262\351\200\211\350\257\276\347\250\213</span></p></body></html>", nullptr));
        returnButton->setText(QApplication::translate("Selectionwindow", "\351\200\200\350\257\276", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Selectionwindow: public Ui_Selectionwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTIONWINDOW_H
