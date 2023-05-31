#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include <QMessageBox>
#include <QCloseEvent>
#include <string>
#include <QString>
#include "mysql.h"
#include "optionwindow.h"
#include <QSqlDatabase>		//数据库驱动
#include <QSqlQuery>			//数据库查询
#include <QDebug>


using namespace std;

namespace Ui {
class Loginwindow;
}

class Loginwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Loginwindow(QWidget *parent = nullptr);
    ~Loginwindow();
    QString loginno;
    QString loginpassword;
    QString getloginno();
    QString Sname;
    QString getSname();
    QSqlQuery query;
    QSqlQuery getqsqlquery();
    QSqlDatabase dbconn;
    QSqlDatabase getqsqldbconn();

private slots:

    void on_loginButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::Loginwindow *ui;
};

#endif // LOGINWINDOW_H
