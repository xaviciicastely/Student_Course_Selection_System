/********************************************************************************
** Form generated from reading UI file 'logwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWINDOW_H
#define UI_LOGWINDOW_H

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

class Ui_Logwindow
{
public:
    QFrame *frame;
    QTableWidget *tableWidget;
    QPushButton *backButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Logwindow)
    {
        if (Logwindow->objectName().isEmpty())
            Logwindow->setObjectName(QString::fromUtf8("Logwindow"));
        Logwindow->resize(821, 497);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        Logwindow->setWindowIcon(icon);
        Logwindow->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Logwindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 821, 501));
        frame->setStyleSheet(QString::fromUtf8("#frame {border-image: url(:/new/prefix1/img/2.png);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(100, 70, 611, 391));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(225, 225, 225,0.5);"));
        backButton = new QPushButton(frame);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(710, 10, 93, 41));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ced1d8;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 10, 201, 41));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-20, 0, 111, 71));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/img/4.png);"));

        retranslateUi(Logwindow);

        QMetaObject::connectSlotsByName(Logwindow);
    } // setupUi

    void retranslateUi(QWidget *Logwindow)
    {
        Logwindow->setWindowTitle(QApplication::translate("Logwindow", "\345\255\246\347\224\237\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Logwindow", "\350\257\276\347\250\213\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Logwindow", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Logwindow", "\346\223\215\344\275\234\347\261\273\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Logwindow", "\344\277\256\350\257\273\347\261\273\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Logwindow", "\346\223\215\344\275\234\346\227\266\351\227\264", nullptr));
        backButton->setText(QApplication::translate("Logwindow", "<<\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
        label->setText(QApplication::translate("Logwindow", "<html><head/><body><p><span style=\" font-size:18pt;\">\351\200\211\350\257\276\346\227\245\345\277\227\346\237\245\350\257\242</span></p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Logwindow: public Ui_Logwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWINDOW_H
