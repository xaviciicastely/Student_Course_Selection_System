#include "logwindow.h"
#include "ui_logwindow.h"
#include "optionwindow.h"

Logwindow::Logwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Logwindow)
{
    ui->setupUi(this);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);           //设置选择行为时每次一行
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);  //表列随着表格变化而自适应变化
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);            //设置表格内容不可编辑
}

Logwindow::~Logwindow()
{
    delete ui;
}

QString Logwindow::getloginno()
{
    return this ->loginno;
}

QSqlQuery Logwindow::getqsqlquery()
{
    return this->query;
}

QString Logwindow::getSname()
{
    return this->Sname;
}

QSqlDatabase Logwindow::getqsqldbconn()
{
    return this->dbconn;
}

void Logwindow::initlog()
{
    QString courselog = QString("select CLCno, CLCname ,CLoperation, CLOPcategory, CLOPtime from courselog where CLSno='%1'; ").arg(loginno);
    int logrow=0, logcolumn =0 ;
    if(query.exec(courselog))
    {
        while(query.next())
        {
            ui->tableWidget->setRowCount(logrow + 1);//设置表格行数
            for(logcolumn=0;logcolumn<4;logcolumn++)
            {
                ui->tableWidget->setItem(logrow,logcolumn,new QTableWidgetItem(query.value(logcolumn).toString()));
                ui->tableWidget->item(logrow,logcolumn)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            }
            QStringList OPtimeList = query.value(logcolumn).toString().split("T");  //初始化时课程时间合并，因此此处需要根据换行符拆分字符串判断上课时间有几个
            QString OPtime = QString("%1 %2").arg(OPtimeList[0], OPtimeList[1]);
            ui->tableWidget->setItem(logrow,4,new QTableWidgetItem(OPtime));
            ui->tableWidget->item(logrow,4)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            ui->tableWidget->resizeColumnsToContents();
            ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表列随着表格变化而自适应变化
            logrow++;
        }
    }
}

void Logwindow::on_backButton_clicked()
{
    Optionwindow *optionwindow = new Optionwindow;
    optionwindow->loginno = this->getloginno();
    optionwindow->query = this->getqsqlquery();
    optionwindow->dbconn = this->getqsqldbconn();
    optionwindow->Sname= this->getSname();
    optionwindow->label();
    this ->close();
    setAttribute(Qt::WA_DeleteOnClose);
    optionwindow ->show();
}
