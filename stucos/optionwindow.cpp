#include "optionwindow.h"
#include "ui_optionwindow.h"
#include "selectionwindow.h"
#include "searchwindow.h"
#include "logwindow.h"
#include "coursetable.h"

Optionwindow::Optionwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Optionwindow)
{
    ui->setupUi(this);
}

Optionwindow::~Optionwindow()
{
    delete ui;
}

void Optionwindow::label()
{
    QString welcome = QString("欢迎你，%1！").arg(Sname);
    ui->label->setText(welcome);
    ui->label->setFont(QFont("宋体" , 20 ,  QFont::Bold));
    ui->label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
}

QString Optionwindow::getloginno()
{
    return this->loginno;
}

QString Optionwindow::getSname()
{
    return this->Sname;
}

QSqlQuery Optionwindow::getqsqlquery()
{
    return this->query;
}

QSqlDatabase Optionwindow::getqsqldbconn()
{
    return this->dbconn;
}

void Optionwindow::on_enterButton_2_clicked()
{
    Selectionwindow *selectionwindow=new Selectionwindow;  //给选课窗口创建一个对象
    selectionwindow->loginno = this -> getloginno();
    selectionwindow->query = this->getqsqlquery();
    selectionwindow->dbconn = this-> getqsqldbconn();
    selectionwindow->Sname= this->getSname();
    this ->close();                //this是选项窗口的指针，关闭
    selectionwindow->initcourse(); //初始化课程信息
    selectionwindow->show();              //选课窗口显示出来
    setAttribute(Qt::WA_DeleteOnClose);     //可实现主页窗口在Close()后自动释放内存
}

void Optionwindow::on_enterButton_3_clicked()
{
    Logwindow *logwindow=new Logwindow;  //给日志窗口创建一个对象
    logwindow->loginno= this -> getloginno();
    logwindow->query = this->getqsqlquery();
    logwindow->dbconn = this->getqsqldbconn();
    logwindow->Sname= this->getSname();
    this ->close();                //this是选项窗口的指针，关闭
    logwindow ->initlog();  //初始化选课日志
    logwindow ->show();              //日志窗口显示出来
    setAttribute(Qt::WA_DeleteOnClose);     //可实现主页窗口在Close()后自动释放内存

}

void Optionwindow::on_enterButton_4_clicked()
{
    Searchwindow *searchwindow=new Searchwindow;  //给全校开课查询窗口创建一个对象
    searchwindow->loginno= this -> getloginno();
    searchwindow->query = this->getqsqlquery();
    searchwindow->dbconn = this->getqsqldbconn();
    searchwindow->Sname= this->getSname();
    this ->close();                //this是选项窗口的指针，关闭
    searchwindow->initallcourse();  //初始化全校课程
    searchwindow ->show();              //全校开课查询窗口显示出来
    setAttribute(Qt::WA_DeleteOnClose);     //可实现主页窗口在Close()后自动释放内存

}


void Optionwindow::on_enterButton_5_clicked()
{
    Coursetable *coursetable = new Coursetable;     //给课程表查询窗口创建一个对象
    coursetable->loginno = this->getloginno();
    coursetable->query = this->getqsqlquery();
    coursetable->dbconn = this->getqsqldbconn();
    coursetable->Sname= this->getSname();
    this ->close();                //this是选项窗口的指针，关闭
    coursetable->initcoursetable();
    coursetable ->show();              //课程表查询查询窗口显示出来
    setAttribute(Qt::WA_DeleteOnClose);     //可实现主页窗口在Close()后自动释放内存

}
