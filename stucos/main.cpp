#include "optionwindow.h"
#include "loginwindow.h"
#include <QApplication>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Loginwindow w;
    w.show();


    return a.exec();
}
