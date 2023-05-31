/********************************************************************************
** Form generated from reading UI file 'searchwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Searchwindow
{
public:
    QFrame *frame_2;
    QFrame *frame;
    QLineEdit *Cname_lineEdit;
    QPushButton *searchButton;
    QPushButton *restartButton;
    QLineEdit *CTname_lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *Cno_lineEdit;
    QLabel *label_7;
    QLabel *label_9;
    QComboBox *Cschool_comboBox;
    QComboBox *CTschool_comboBox;
    QLabel *label_8;
    QComboBox *Ccategory_comboBox;
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *backButton;
    QLabel *label_2;

    void setupUi(QWidget *Searchwindow)
    {
        if (Searchwindow->objectName().isEmpty())
            Searchwindow->setObjectName(QString::fromUtf8("Searchwindow"));
        Searchwindow->resize(1195, 661);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        Searchwindow->setWindowIcon(icon);
        Searchwindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:rgba(255,255,255,0.8);\n"
"font-size:18px;\n"
"font-style:MingLiU-ExtB;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"\n"
"QComboBox{\n"
"background-color:rgba(255,255,255,0.8);\n"
"font-size:18px;\n"
"font-style:MingLiU-ExtB;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        frame_2 = new QFrame(Searchwindow);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 1201, 661));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2 {border-image: url(:/new/prefix1/img/7.png);}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 90, 1171, 181));
        frame->setStyleSheet(QString::fromUtf8("#frame { background-color: rgba(225, 225, 225,0.5);}\n"
"QPushButton{\n"
"background:#ced1d8;\n"
"background-color:rgba(255,255,255,0.7);\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(225,225,225);\n"
"border-style:inset;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Cname_lineEdit = new QLineEdit(frame);
        Cname_lineEdit->setObjectName(QString::fromUtf8("Cname_lineEdit"));
        Cname_lineEdit->setGeometry(QRect(530, 10, 221, 31));
        Cname_lineEdit->setStyleSheet(QString::fromUtf8(""));
        searchButton = new QPushButton(frame);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(600, 130, 93, 41));
        searchButton->setStyleSheet(QString::fromUtf8("background-colour:rgba(225,225,225,1);"));
        restartButton = new QPushButton(frame);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        restartButton->setGeometry(QRect(490, 130, 93, 41));
        restartButton->setStyleSheet(QString::fromUtf8("background-colour:rgba(225,225,225,1);"));
        CTname_lineEdit = new QLineEdit(frame);
        CTname_lineEdit->setObjectName(QString::fromUtf8("CTname_lineEdit"));
        CTname_lineEdit->setGeometry(QRect(530, 70, 221, 31));
        CTname_lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit{\n"
"background-color:rgba(255,255,255,0.8);\n"
"font-size:18px;\n"
"font-style:MingLiU-ExtB;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 10, 101, 31));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 70, 101, 31));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 70, 131, 31));
        Cno_lineEdit = new QLineEdit(frame);
        Cno_lineEdit->setObjectName(QString::fromUtf8("Cno_lineEdit"));
        Cno_lineEdit->setGeometry(QRect(150, 10, 211, 31));
        Cno_lineEdit->setStyleSheet(QString::fromUtf8(""));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 10, 101, 31));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(840, 10, 131, 31));
        Cschool_comboBox = new QComboBox(frame);
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->addItem(QString());
        Cschool_comboBox->setObjectName(QString::fromUtf8("Cschool_comboBox"));
        Cschool_comboBox->setGeometry(QRect(940, 10, 211, 31));
        CTschool_comboBox = new QComboBox(frame);
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->addItem(QString());
        CTschool_comboBox->setObjectName(QString::fromUtf8("CTschool_comboBox"));
        CTschool_comboBox->setGeometry(QRect(940, 70, 211, 31));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(800, 70, 131, 31));
        Ccategory_comboBox = new QComboBox(frame);
        Ccategory_comboBox->addItem(QString());
        Ccategory_comboBox->addItem(QString());
        Ccategory_comboBox->addItem(QString());
        Ccategory_comboBox->addItem(QString());
        Ccategory_comboBox->addItem(QString());
        Ccategory_comboBox->addItem(QString());
        Ccategory_comboBox->setObjectName(QString::fromUtf8("Ccategory_comboBox"));
        Ccategory_comboBox->setGeometry(QRect(150, 70, 211, 31));
        tableWidget = new QTableWidget(frame_2);
        if (tableWidget->columnCount() < 13)
            tableWidget->setColumnCount(13);
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
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 280, 1171, 371));
        tableWidget->setMaximumSize(QSize(1171, 16777215));
        tableWidget->setStyleSheet(QString::fromUtf8("#tableWidget{background-color:rgba(225,225,225,0.5);}\n"
""));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 10, 211, 31));
        backButton = new QPushButton(frame_2);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(1090, 10, 93, 41));
        backButton->setStyleSheet(QString::fromUtf8("#backButton{\n"
"background:#ced1d8;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"#backButton:pressed{\n"
"background-color:rgb(225,225,225);\n"
"border-style:inset;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-20, 0, 121, 71));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/img/4.png);"));

        retranslateUi(Searchwindow);

        QMetaObject::connectSlotsByName(Searchwindow);
    } // setupUi

    void retranslateUi(QWidget *Searchwindow)
    {
        Searchwindow->setWindowTitle(QApplication::translate("Searchwindow", "\345\255\246\347\224\237\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        searchButton->setText(QApplication::translate("Searchwindow", "\345\274\200\345\247\213\346\237\245\350\257\242", nullptr));
        restartButton->setText(QApplication::translate("Searchwindow", "\351\207\215\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        CTname_lineEdit->setToolTip(QApplication::translate("Searchwindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("Searchwindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Searchwindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\274\200\350\257\276\346\225\231\345\270\210\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Searchwindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\276\347\250\213\346\200\247\350\264\250\357\274\232</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("Searchwindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\276\347\250\213\345\272\217\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("Searchwindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\274\200\350\257\276\351\231\242\347\263\273\357\274\232</span></p></body></html>", nullptr));
        Cschool_comboBox->setItemText(0, QApplication::translate("Searchwindow", "...", nullptr));
        Cschool_comboBox->setItemText(1, QApplication::translate("Searchwindow", "\344\277\241\346\201\257\344\270\216\351\200\232\344\277\241\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(2, QApplication::translate("Searchwindow", "\347\224\265\345\255\220\347\247\221\345\255\246\344\270\216\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(3, QApplication::translate("Searchwindow", "\346\235\220\346\226\231\344\270\216\350\203\275\346\272\220\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(4, QApplication::translate("Searchwindow", "\346\234\272\346\242\260\344\270\216\347\224\265\346\260\224\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(5, QApplication::translate("Searchwindow", "\345\205\211\347\224\265\347\247\221\345\255\246\344\270\216\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(6, QApplication::translate("Searchwindow", "\350\207\252\345\212\250\345\214\226\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(7, QApplication::translate("Searchwindow", "\350\265\204\346\272\220\344\270\216\347\216\257\345\242\203\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(8, QApplication::translate("Searchwindow", "\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(9, QApplication::translate("Searchwindow", "\344\277\241\346\201\257\344\270\216\350\275\257\344\273\266\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(10, QApplication::translate("Searchwindow", "\350\210\252\345\244\251\350\210\252\347\251\272\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(11, QApplication::translate("Searchwindow", "\346\225\260\345\255\246\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(12, QApplication::translate("Searchwindow", "\345\214\273\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(13, QApplication::translate("Searchwindow", "\347\224\237\345\221\275\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(14, QApplication::translate("Searchwindow", "\347\273\217\346\265\216\344\270\216\347\256\241\347\220\206\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(15, QApplication::translate("Searchwindow", "\345\205\254\345\205\261\347\256\241\347\220\206\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(16, QApplication::translate("Searchwindow", "\345\244\226\345\233\275\350\257\255\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(17, QApplication::translate("Searchwindow", "\351\251\254\345\205\213\346\200\235\345\255\246\351\231\242", nullptr));
        Cschool_comboBox->setItemText(18, QApplication::translate("Searchwindow", "\346\240\274\346\213\211\346\226\257\345\223\245\345\255\246\351\231\242", nullptr));

        CTschool_comboBox->setItemText(0, QApplication::translate("Searchwindow", "...", nullptr));
        CTschool_comboBox->setItemText(1, QApplication::translate("Searchwindow", "\344\277\241\346\201\257\344\270\216\351\200\232\344\277\241\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(2, QApplication::translate("Searchwindow", "\347\224\265\345\255\220\347\247\221\345\255\246\344\270\216\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(3, QApplication::translate("Searchwindow", "\346\235\220\346\226\231\344\270\216\350\203\275\346\272\220\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(4, QApplication::translate("Searchwindow", "\346\234\272\346\242\260\344\270\216\347\224\265\346\260\224\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(5, QApplication::translate("Searchwindow", "\345\205\211\347\224\265\347\247\221\345\255\246\344\270\216\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(6, QApplication::translate("Searchwindow", "\350\207\252\345\212\250\345\214\226\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(7, QApplication::translate("Searchwindow", "\350\265\204\346\272\220\344\270\216\347\216\257\345\242\203\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(8, QApplication::translate("Searchwindow", "\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(9, QApplication::translate("Searchwindow", "\344\277\241\346\201\257\344\270\216\350\275\257\344\273\266\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(10, QApplication::translate("Searchwindow", "\350\210\252\345\244\251\350\210\252\347\251\272\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(11, QApplication::translate("Searchwindow", "\346\225\260\345\255\246\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(12, QApplication::translate("Searchwindow", "\345\214\273\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(13, QApplication::translate("Searchwindow", "\347\224\237\345\221\275\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(14, QApplication::translate("Searchwindow", "\347\273\217\346\265\216\344\270\216\347\256\241\347\220\206\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(15, QApplication::translate("Searchwindow", "\345\205\254\345\205\261\347\256\241\347\220\206\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(16, QApplication::translate("Searchwindow", "\345\244\226\345\233\275\350\257\255\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(17, QApplication::translate("Searchwindow", "\351\251\254\345\205\213\346\200\235\345\255\246\351\231\242", nullptr));
        CTschool_comboBox->setItemText(18, QApplication::translate("Searchwindow", "\346\240\274\346\213\211\346\226\257\345\223\245\345\255\246\351\231\242", nullptr));

        label_8->setText(QApplication::translate("Searchwindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\225\231\345\270\210\346\211\200\345\234\250\351\231\242\347\263\273\357\274\232</span></p></body></html>", nullptr));
        Ccategory_comboBox->setItemText(0, QApplication::translate("Searchwindow", "...", nullptr));
        Ccategory_comboBox->setItemText(1, QApplication::translate("Searchwindow", "\344\270\223\344\270\232\345\277\205\344\277\256\350\257\276", nullptr));
        Ccategory_comboBox->setItemText(2, QApplication::translate("Searchwindow", "\344\270\223\344\270\232\351\200\211\344\277\256\350\257\276", nullptr));
        Ccategory_comboBox->setItemText(3, QApplication::translate("Searchwindow", "\346\225\260\345\255\246\344\270\216\350\207\252\347\204\266\347\247\221\345\255\246\345\237\272\347\241\200\350\257\276", nullptr));
        Ccategory_comboBox->setItemText(4, QApplication::translate("Searchwindow", "\351\200\232\347\224\250\345\244\226\350\257\255", nullptr));
        Ccategory_comboBox->setItemText(5, QApplication::translate("Searchwindow", "\345\244\232\345\205\203\345\214\226\351\200\211\344\277\256\350\257\276", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Searchwindow", "\350\257\276\347\250\213\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Searchwindow", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Searchwindow", "\350\257\276\347\250\213\346\200\247\350\264\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Searchwindow", "\344\270\212\350\257\276\351\231\242\347\263\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Searchwindow", "\346\225\231\345\270\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Searchwindow", "\350\201\214\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Searchwindow", "\346\225\231\345\270\210\346\211\200\345\234\250\351\231\242\347\263\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Searchwindow", "\345\255\246\346\227\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Searchwindow", "\345\255\246\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Searchwindow", "\350\257\276\347\250\213\345\256\271\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Searchwindow", "\344\270\212\350\257\276\345\255\246\347\224\237\344\272\272\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("Searchwindow", "\344\270\212\350\257\276\345\234\260\347\202\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("Searchwindow", "\344\270\212\350\257\276\346\227\266\351\227\264", nullptr));
        label->setText(QApplication::translate("Searchwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\345\205\250\346\240\241\345\274\200\350\257\276\346\237\245\350\257\242</span></p></body></html>", nullptr));
        backButton->setText(QApplication::translate("Searchwindow", "<<\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Searchwindow: public Ui_Searchwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
