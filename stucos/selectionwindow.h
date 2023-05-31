#ifndef SELECTIONWINDOW_H
#define SELECTIONWINDOW_H

#include <QWidget>
#include <string>
#include "mysql.h"
#include "loginwindow.h"
#include <QDebug>

namespace Ui {
class Selectionwindow;
}

class Selectionwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Selectionwindow(QWidget *parent = nullptr);
    ~Selectionwindow();
    void initcourse(); //用来展示学生的可选课程和已选课程
    QString loginno;
    QString SCno;
    QString SCname;
    int SCSnumbermax;
    int SCSnumber;
    int SCcredit_sum;
    QString SCtime_1,SCtime_2,SCtime_3;
    QString getloginno();
    QString Sname;
    QString getSname();
    QSqlQuery query;
    QSqlQuery getqsqlquery();
    QSqlDatabase dbconn;
    QSqlDatabase getqsqldbconn();

private slots:
    void on_backButton_clicked();
    void on_returnButton_clicked();
    void on_selectButton_clicked();

private:
    Ui::Selectionwindow *ui;
};

#endif // SELECTIONWINDOW_H
