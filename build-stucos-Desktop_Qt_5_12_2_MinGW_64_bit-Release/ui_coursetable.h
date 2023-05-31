/********************************************************************************
** Form generated from reading UI file 'coursetable.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSETABLE_H
#define UI_COURSETABLE_H

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

class Ui_Coursetable
{
public:
    QFrame *frame;
    QPushButton *backButton;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_2;

    void setupUi(QWidget *Coursetable)
    {
        if (Coursetable->objectName().isEmpty())
            Coursetable->setObjectName(QString::fromUtf8("Coursetable"));
        Coursetable->resize(1126, 611);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        Coursetable->setWindowIcon(icon);
        Coursetable->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Coursetable);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1131, 621));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/new/prefix1/img/8.jpg);}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backButton = new QPushButton(frame);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(1020, 20, 93, 41));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ced1d8;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 20, 131, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(233, 236, 242,0.7);"));
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QFont font;
        font.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font);
        tableWidget->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem13);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(90, 100, 971, 461));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(225, 225, 225,0.8);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-10, 0, 101, 71));
        label_2->setStyleSheet(QString::fromUtf8("#label_2 {image: url(:/new/prefix1/img/4.png);\n"
"}\n"
""));

        retranslateUi(Coursetable);

        QMetaObject::connectSlotsByName(Coursetable);
    } // setupUi

    void retranslateUi(QWidget *Coursetable)
    {
        Coursetable->setWindowTitle(QApplication::translate("Coursetable", "\345\255\246\347\224\237\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        backButton->setText(QApplication::translate("Coursetable", "<<\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
        label->setText(QApplication::translate("Coursetable", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\346\210\221\347\232\204\350\257\276\350\241\250</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Coursetable", "\345\221\250\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Coursetable", "\345\221\250\344\272\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Coursetable", "\345\221\250\344\270\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Coursetable", "\345\221\250\345\233\233", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Coursetable", "\345\221\250\344\272\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Coursetable", "\345\221\250\345\205\255", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Coursetable", "\345\221\250\346\227\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("Coursetable", "\347\254\254\344\270\200\343\200\201\344\272\214\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("Coursetable", "\347\254\254\344\270\211\343\200\201\345\233\233\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("Coursetable", "\347\254\254\344\272\224\343\200\201\345\205\255\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("Coursetable", "\347\254\254\344\270\203\343\200\201\345\205\253\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("Coursetable", "\347\254\254\344\271\235\343\200\201\345\215\201\350\212\202", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Coursetable: public Ui_Coursetable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSETABLE_H
