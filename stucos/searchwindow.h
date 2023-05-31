#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include <QWidget>

#include <string>
#include "mysql.h"
#include "loginwindow.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class Searchwindow;
}

class Searchwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Searchwindow(QWidget *parent = nullptr);
    ~Searchwindow();
    QString loginno;
    QString Sname;
    QString getSname();
    QString getloginno();
    QSqlQuery query;
    QSqlQuery getqsqlquery();
    QSqlDatabase dbconn;
    QSqlDatabase getqsqldbconn();
    void initallcourse();

private slots:
    void on_backButton_clicked();

    void on_restartButton_clicked();

    void on_searchButton_clicked();

private:
    Ui::Searchwindow *ui;
};

#endif // SEARCHWINDOW_H
