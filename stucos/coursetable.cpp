#include "coursetable.h"
#include "ui_coursetable.h"
#include "optionwindow.h"
#include <QString>

Coursetable::Coursetable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Coursetable)
{
    ui->setupUi(this);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems); //只能选中一个单元格
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);    //设置表格不可编辑
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); //列头随着表格变化而自适应变化
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch); //行头随着表格变化而自适应变化

}

Coursetable::~Coursetable()
{
    delete ui;
}

QString Coursetable::getloginno()
{
    return this ->loginno;
}

QString Coursetable::getSname()
{
    return this->Sname;
}


QSqlQuery Coursetable::getqsqlquery()
{
    return this->query;
}

QSqlDatabase Coursetable::getqsqldbconn()
{
    return this->dbconn;
}

void Coursetable::initcoursetable()
{
    QString selectedcourse = QString("select Cno, Cname, CTname, Ctime1, Ctime2, Ctime3, Cplace from selectedcourse where Sno = '%1'; ").arg(loginno);
    query.exec(selectedcourse);
    while(query.next())
    {
        QString CCno=query.value(0).toString();
        QString CCname=query.value(1).toString();
        QString CCTname=query.value(2).toString();
        QString CCtime1=query.value(3).toString();
        QString CCtime2=query.value(4).toString();
        QString CCtime3=query.value(5).toString();
        QString CCplace=query.value(6).toString();
        QString tab="\n";
        tableCtime=QString("%1").arg(CCtime1);
        getrowcolumn();
        QString coursetable_info=QString("%1 %2%3(%4)%3%5").arg(CCTname, CCname, tab, CCno, CCplace);
        QTableWidgetItem *CCitem = new QTableWidgetItem(coursetable_info);
        ui->tableWidget->setItem(tablerow,tablecolumn,CCitem);
        ui->tableWidget->item(tablerow,tablecolumn)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
        ui->tableWidget->resizeRowsToContents();
        if(!query.value(4).toString().isEmpty())
        {
            tableCtime=QString("%1").arg(CCtime2);
            getrowcolumn();
            QTableWidgetItem *CCCitem = new QTableWidgetItem(coursetable_info);
            ui->tableWidget->setItem(tablerow,tablecolumn,CCCitem);
            ui->tableWidget->item(tablerow,tablecolumn)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            ui->tableWidget->resizeRowsToContents();
        }
        if(!query.value(5).toString().isEmpty())
        {
            tableCtime=QString("%1").arg(CCtime3);
            getrowcolumn();
            QTableWidgetItem *CCCCitem = new QTableWidgetItem(coursetable_info);
            ui->tableWidget->setItem(tablerow,tablecolumn,CCCCitem);
            ui->tableWidget->item(tablerow,tablecolumn)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            ui->tableWidget->resizeRowsToContents();
        }

    }

}

void Coursetable::getrowcolumn()
{
    if(this->tableCtime.isEmpty())
    {
        this->tablerow=99999;
        this->tablecolumn=99999;
    }

    //星期一
    if(this->tableCtime=="星期一 1-2")
    {
        this->tablerow=0;
        this->tablecolumn=0;
    }
    if(this->tableCtime=="星期一 3-4")
    {
        this->tablerow=1;
        this->tablecolumn=0;
    }
    if(this->tableCtime=="星期一 5-6")
    {
        this->tablerow=2;
        this->tablecolumn=0;
    }
    if(this->tableCtime=="星期一 7-8")
    {
        this->tablerow=3;
        this->tablecolumn=0;
    }
    if(this->tableCtime=="星期一 9-10")
    {
        this->tablerow=4;
        this->tablecolumn=0;
    }

    //星期二
    if(this->tableCtime=="星期二 1-2")
    {
        this->tablerow=0;
        this->tablecolumn=1;
    }
    if(this->tableCtime=="星期二 3-4")
    {
        this->tablerow=1;
        this->tablecolumn=1;
    }
    if(this->tableCtime=="星期二 5-6")
    {
        this->tablerow=2;
        this->tablecolumn=1;
    }
    if(this->tableCtime=="星期二 7-8")
    {
        this->tablerow=3;
        this->tablecolumn=1;
    }
    if(this->tableCtime=="星期二 9-10")
    {
        this->tablerow=4;
        this->tablecolumn=1;
    }

    //星期三
    if(this->tableCtime=="星期三 1-2")
    {
        this->tablerow=0;
        this->tablecolumn=2;
    }
    if(this->tableCtime=="星期三 3-4")
    {
        this->tablerow=1;
        this->tablecolumn=2;
    }
    if(this->tableCtime=="星期三 5-6")
    {
        this->tablerow=2;
        this->tablecolumn=2;
    }
    if(this->tableCtime=="星期三 7-8")
    {
        this->tablerow=3;
        this->tablecolumn=2;
    }
    if(this->tableCtime=="星期三 9-10")
    {
        this->tablerow=4;
        this->tablecolumn=2;
    }

    //星期四
    if(this->tableCtime=="星期四 1-2")
    {
        this->tablerow=0;
        this->tablecolumn=3;
    }
    if(this->tableCtime=="星期四 3-4")
    {
        this->tablerow=1;
        this->tablecolumn=3;
    }
    if(this->tableCtime=="星期四 5-6")
    {
        this->tablerow=2;
        this->tablecolumn=3;
    }
    if(this->tableCtime=="星期四 7-8")
    {
        this->tablerow=3;
        this->tablecolumn=3;
    }
    if(this->tableCtime=="星期四 9-10")
    {
        this->tablerow=4;
        this->tablecolumn=3;
    }

    //星期五
    if(this->tableCtime=="星期五 1-2")
    {
        this->tablerow=0;
        this->tablecolumn=4;
    }
    if(this->tableCtime=="星期五 3-4")
    {
        this->tablerow=1;
        this->tablecolumn=4;
    }
    if(this->tableCtime=="星期五 5-6")
    {
        this->tablerow=2;
        this->tablecolumn=4;
    }
    if(this->tableCtime=="星期五 7-8")
    {
        this->tablerow=3;
        this->tablecolumn=4;
    }
    if(this->tableCtime=="星期五 9-10")
    {
        this->tablerow=4;
        this->tablecolumn=4;
    }

    //星期六
    if(this->tableCtime=="星期六 1-2")
    {
        this->tablerow=0;
        this->tablecolumn=5;
    }
    if(this->tableCtime=="星期六 3-4")
    {
        this->tablerow=1;
        this->tablecolumn=5;
    }
    if(this->tableCtime=="星期六 5-6")
    {
        this->tablerow=2;
        this->tablecolumn=5;
    }
    if(this->tableCtime=="星期六 7-8")
    {
        this->tablerow=3;
        this->tablecolumn=5;
    }
    if(this->tableCtime=="星期六 9-10")
    {
        this->tablerow=4;
        this->tablecolumn=5;
    }

    //星期日
    if(this->tableCtime=="星期日 1-2")
    {
        this->tablerow=0;
        this->tablecolumn=6;
    }
    if(this->tableCtime=="星期日 3-4")
    {
        this->tablerow=1;
        this->tablecolumn=6;
    }
    if(this->tableCtime=="星期日 5-6")
    {
        this->tablerow=2;
        this->tablecolumn=6;
    }
    if(this->tableCtime=="星期日 7-8")
    {
        this->tablerow=3;
        this->tablecolumn=6;
    }
    if(this->tableCtime=="星期日 9-10")
    {
        this->tablerow=4;
        this->tablecolumn=6;
    }
}





void Coursetable::on_backButton_clicked()
{
    Optionwindow *optionwindow = new Optionwindow;
    optionwindow->loginno = this->getloginno();
    optionwindow->dbconn = this->getqsqldbconn();
    optionwindow->Sname= this->getSname();
    optionwindow->label();
    this ->close();
    optionwindow ->show();
    setAttribute(Qt::WA_DeleteOnClose);
}

