#ifndef OPTIONWINDOW_H
#define OPTIONWINDOW_H

#include <QWidget>
#include <QSqlDatabase>		//数据库驱动
#include <QSqlQuery>			//数据库查询
#include <QMessageBox>
#include <QCloseEvent>
#include <string>
#include <QString>
#include "mysql.h"

namespace Ui {
class Optionwindow;
}

class Optionwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Optionwindow(QWidget *parent = nullptr);
    ~Optionwindow();
    QString loginno;
    QString getloginno();
    QString Sname;
    QString getSname();
    QSqlQuery query;
    QSqlQuery getqsqlquery();
    QSqlDatabase dbconn;
    QSqlDatabase getqsqldbconn();
    void label();

private slots:

    void on_enterButton_2_clicked();

    void on_enterButton_3_clicked();

    void on_enterButton_4_clicked();

    void on_enterButton_5_clicked();

private:
    Ui::Optionwindow *ui;
};

#endif // OPTIONWINDOW_H
