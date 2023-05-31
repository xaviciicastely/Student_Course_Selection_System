#include "searchwindow.h"
#include "ui_searchwindow.h"
#include "optionwindow.h"

Searchwindow::Searchwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Searchwindow)
{
    ui->setupUi(this);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);       //设置选择行为时每次一行
    //ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表列随着表格变化而自适应变化
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);        //设置表格内容不可编辑
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
}

Searchwindow::~Searchwindow()
{
    delete ui;
}

QString Searchwindow::getloginno()
{
    return this -> loginno;
}

QString Searchwindow::getSname()
{
    return this->Sname;
}


QSqlQuery Searchwindow::getqsqlquery()
{
    return this->query;
}

QSqlDatabase Searchwindow::getqsqldbconn()
{
    return this->dbconn;
}

void Searchwindow::initallcourse()
{
    QString init_allcourse = QString("select Cno, Cname, Ccategory, Cschool, CTname, CTtitle, CTschool, Cperiod, Ccredit, "
                                     "CSnumbermax, Csnumber, Cplace, Ctime1, Ctime2, Ctime3 from course; ");
    int row=0, column=0;
    if(query.exec(init_allcourse))
    {
        while (query.next())
        {
            ui->tableWidget->setRowCount(row + 1);//设置表格行数
            for(column=0;column<12;column++)
            {
                ui->tableWidget->setItem(row,column,new QTableWidgetItem(query.value(column).toString()));
                ui->tableWidget->item(row,column)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            }
            //将课程的上课时间合并，填入同一个单元格
            QString ACtime;
            QString ACtime1=query.value(12).toString();
            QString ACtime2=query.value(13).toString();
            QString ACtime3=query.value(14).toString();
            QString tab="\n";
            ACtime=QString("%1").arg(ACtime1);
            if(!query.value(13).toString().isEmpty())
            {
                ACtime=QString("%1%2%3").arg(ACtime1,tab,ACtime2);
            }
            if(!query.value(14).toString().isEmpty())
            {
                ACtime=QString("%1%2%3%4%5").arg(ACtime1,tab,ACtime2,tab,ACtime3);
            }
            QTableWidgetItem *ACitem = new QTableWidgetItem(ACtime);
            ui->tableWidget->setItem(row,12,ACitem);
            ui->tableWidget->item(row,12)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            ui->tableWidget->resizeRowsToContents();
            row ++;
        }
    }
}

void Searchwindow::on_backButton_clicked()
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


void Searchwindow::on_restartButton_clicked()
{
    for(int i = ui->tableWidget->rowCount() - 1; i >= 0; i--)
    {
        ui->tableWidget->removeRow(i);
    }
    ui->Cno_lineEdit->setText("");
    ui->Cname_lineEdit->setText("");
    ui->Ccategory_comboBox->setCurrentIndex(0);
    ui->Cschool_comboBox->setCurrentIndex(0);
    ui->CTname_lineEdit->setText("");
    ui->CTschool_comboBox->setCurrentIndex(0);
    initallcourse();
}

void Searchwindow::on_searchButton_clicked()
{
    QString CCno= ui->Cno_lineEdit->text();
    QString CCname = ui->Cname_lineEdit->text();
    QString CCcategory = ui->Ccategory_comboBox->currentText();
    QString CCschool = ui->Cschool_comboBox->currentText();
    QString CCTname = ui->CTname_lineEdit->text();
    QString CCTschool = ui->CTschool_comboBox->currentText();
    if(CCno == "")
    {
        CCno = "%%";
    }
    if(CCname == "")
    {
        CCname = "%%";
    }
    if(CCcategory == "...")
    {
        CCcategory = "%%";
    }
    if(CCschool == "...")
    {
        CCschool = "%%";
    }
    if(CCTname == "")
    {
        CCTname = "%%";
    }
    if(CCTschool == "...")
    {
        CCTschool = "%%";
    }
    qDebug()<<CCno<<CCname<<CCcategory<<CCschool<<CCTname<<CCTschool;
    QString searchcourse = QString("select Cno, Cname, Ccategory, Cschool, CTname, CTtitle, CTschool, Cperiod, Ccredit, "
                                   "CSnumbermax, Csnumber, Cplace, Ctime1, Ctime2, Ctime3 from course where Cno like "
                                   "concat('%%','%1','%%') and Cname like concat('%%','%2','%%') and Ccategory like "
                                   "concat('%%','%3','%%') and Cschool like concat('%%','%4','%%') and CTname "
                                   "like concat('%%','%5','%%') and CTschool like concat('%%','%6','%%'); ").arg(CCno).arg(CCname)
                                    .arg(CCcategory).arg(CCschool).arg(CCTname).arg(CCTschool);
    int row = 0, column = 0;
    if (query.exec(searchcourse))
    {
        if(!query.first())
        {
            for(int i = ui->tableWidget->rowCount() - 1; i >= 0; i--)
            {
                ui->tableWidget->removeRow(i);
            }
        }
        else if(query.first())
        {
            ui->tableWidget->setRowCount(row + 1);//设置表格行数
            for(column=0;column<12;column++)
            {
                ui->tableWidget->setItem(row,column,new QTableWidgetItem(query.value(column).toString()));
                ui->tableWidget->item(row,column)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            }
            //将课程的上课时间合并，填入同一个单元格
            QString ACtime;
            QString ACtime1=query.value(12).toString();
            QString ACtime2=query.value(13).toString();
            QString ACtime3=query.value(14).toString();
            QString tab="\n";
            ACtime=QString("%1").arg(ACtime1);

            if(!query.value(13).toString().isEmpty())
            {
                ACtime=QString("%1%2%3").arg(ACtime1,tab,ACtime2);
            }
            if(!query.value(14).toString().isEmpty())
            {
                ACtime=QString("%1%2%3%4%5").arg(ACtime1,tab,ACtime2,tab,ACtime3);
            }
            QTableWidgetItem *ACitem = new QTableWidgetItem(ACtime);
            ui->tableWidget->setItem(row,12,ACitem);
            ui->tableWidget->item(row,12)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            ui->tableWidget->resizeRowsToContents();
            row ++;
            while (query.next())
            {
                ui->tableWidget->setRowCount(row + 1);//设置表格行数
                for(column=0;column<12;column++)
                {
                    ui->tableWidget->setItem(row,column,new QTableWidgetItem(query.value(column).toString()));
                    ui->tableWidget->item(row,column)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
                }
                //将课程的上课时间合并，填入同一个单元格

                ACtime1=query.value(12).toString();
                ACtime2=query.value(13).toString();
                ACtime3=query.value(14).toString();
                ACtime=QString("%1").arg(ACtime1);

                if(!query.value(13).toString().isEmpty())
                {
                    ACtime=QString("%1%2%3").arg(ACtime1,tab,ACtime2);
                }
                if(!query.value(14).toString().isEmpty())
                {
                    ACtime=QString("%1%2%3%4%5").arg(ACtime1,tab,ACtime2,tab,ACtime3);
                }
                QTableWidgetItem *ACitem = new QTableWidgetItem(ACtime);
                ui->tableWidget->setItem(row,12,ACitem);
                ui->tableWidget->item(row,12)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
                ui->tableWidget->resizeRowsToContents();
                row ++;
            }
        }
    }
}
