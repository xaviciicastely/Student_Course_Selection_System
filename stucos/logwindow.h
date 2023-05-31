#ifndef LOGWINDOW_H
#define LOGWINDOW_H

#include <QWidget>

#include <string>
#include "mysql.h"
#include "loginwindow.h"

namespace Ui {
class Logwindow;
}

class Logwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Logwindow(QWidget *parent = nullptr);
    ~Logwindow();
    QString loginno;
    QString getloginno();
    QString Sname;
    QString getSname();
    QSqlQuery query;
    QSqlQuery getqsqlquery();
    QSqlDatabase dbconn;
    QSqlDatabase getqsqldbconn();
    void initlog();

private slots:
    void on_backButton_clicked();

private:
    Ui::Logwindow *ui;
};

#endif // LOGWINDOW_H
