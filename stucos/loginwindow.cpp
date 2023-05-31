#include "loginwindow.h"
#include "ui_loginwindow.h"

Loginwindow::Loginwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Loginwindow)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

Loginwindow::~Loginwindow()
{
    delete ui;
}


QString Loginwindow::getloginno()
{
    return this->loginno;
}

QString Loginwindow::getSname()
{
    return this->Sname;
}

QSqlQuery Loginwindow::getqsqlquery()
{
    return this->query;
}

QSqlDatabase Loginwindow::getqsqldbconn()
{
    return this->dbconn;
}

void Loginwindow::on_loginButton_clicked()
{
    this->loginno = ui->lineEdit->text();
    this->loginpassword = ui->lineEdit_2->text();
    this ->query= QSqlQuery(dbconn);
    if(QSqlDatabase::contains(QSqlDatabase::defaultConnection))
    {
        this->dbconn = QSqlDatabase::database(QSqlDatabase::defaultConnection);
    }
    else
    {
        this->dbconn = QSqlDatabase::addDatabase("QMYSQL");
    }
    this->dbconn.setHostName("127.0.0.1");    //主机名字
    this->dbconn.setPort(3306); //端口号
    this->dbconn.setDatabaseName("scss"); //数据库名字
    this->dbconn.setUserName("root"); //设置数据库登入用户名
    this->dbconn.setPassword("123456qz"); //设置数据库登入密码
    this->dbconn.open();
    this ->query = QSqlQuery(this->dbconn);
    QString S =QString("select * from scss.student where Sno='%1' and Spassword='%2' ").arg(loginno).arg(loginpassword);
    if (query.exec(S) && query.next())
    {
        /*this->hide();//隐藏登录对话框
        emit Optionwindow();//显示主窗口*/

        Optionwindow *optionwindow=new Optionwindow;  //给首页窗口创建一个对象
        optionwindow->loginno= this->getloginno();
        optionwindow->query= this->getqsqlquery();
        this->Sname = query.value(2).toString();
        optionwindow->Sname= this->getSname();
        optionwindow->label();
        this ->close();                //this是登陆窗口的指针，关闭
        setAttribute(Qt::WA_DeleteOnClose);
        optionwindow ->show();              //首页窗口显示出来
    }
    else
    {
        QMessageBox msgBox(QMessageBox::Warning,QString("错误"),QString("<font size='5' color='black'>学号或密码错误,请重新输入！</font>"));
        msgBox.setStyleSheet("QPushButton {"
                             "background-color:#89AFDE;"
                             " border-style: outset;"
                             " border-width: 2px;"
                             " border-radius: 5px;"
                             " border-color: beige;"
                             " font: bold 17px;"
                             " min-width: 5em;"
                             " min-height: 2em;"
                             "}"
                             );
        msgBox.exec();

        //QMessageBox::warning(this,"学号或密码错误","<font size='5' color='black'>请重新输入！</font>");
    }
}


void Loginwindow::on_exitButton_clicked()
{
    this ->close();
    setAttribute(Qt::WA_DeleteOnClose);
}
