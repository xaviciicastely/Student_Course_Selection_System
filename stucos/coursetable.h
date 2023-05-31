#ifndef COURSETABLE_H
#define COURSETABLE_H

#include <QWidget>

#include <string>
#include "mysql.h"
#include "loginwindow.h"
#include <QString>

namespace Ui {
class Coursetable;
}

class Coursetable : public QWidget
{
    Q_OBJECT

public:
    explicit Coursetable(QWidget *parent = nullptr);
    ~Coursetable();
    QString loginno;
    QString getloginno();
    QString Sname;
    QString getSname();
    QSqlQuery query;
    QSqlQuery getqsqlquery();
    QSqlDatabase dbconn;
    QSqlDatabase getqsqldbconn();
    void initcoursetable();
    int tablerow;
    int tablecolumn;
    QString tableCtime;
    void getrowcolumn();

private slots:
    void on_backButton_clicked();

private:
    Ui::Coursetable *ui;
};

#endif // COURSETABLE_H
