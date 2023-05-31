#include "selectionwindow.h"
#include "ui_selectionwindow.h"
#include "optionwindow.h"
#include "loginwindow.h"
Selectionwindow::Selectionwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Selectionwindow)
{
    ui->setupUi(this);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);       //设置选择行为时每次一行
    //ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表列随着表格变化而自适应变化
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);        //设置表格内容不可编辑
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);     //设置选择行为时每次一行
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);      //设置表格内容不可编辑
    //ui->tableWidget_2->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch); //表列随着表格变化而自适应变化
    ui->tableWidget_2->setFocusPolicy(Qt::NoFocus);
    ui->label_3->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

}

Selectionwindow::~Selectionwindow()
{
    delete ui;
}

QString Selectionwindow::getloginno()
{
    return this ->loginno;
}

QString Selectionwindow::getSname()
{
    return this->Sname;
}


QSqlQuery Selectionwindow::getqsqlquery()
{
    return this->query;
}

QSqlDatabase Selectionwindow::getqsqldbconn()
{
    return this->dbconn;
}

void Selectionwindow::on_backButton_clicked()
{
    Optionwindow *optionwindow = new Optionwindow;
    optionwindow->loginno = this->getloginno();
    optionwindow->query = this->getqsqlquery();
    optionwindow->dbconn = this->getqsqldbconn();
    optionwindow->Sname= this->getSname();
    optionwindow->label();
    this ->close();
    optionwindow ->show();
    setAttribute(Qt::WA_DeleteOnClose);
}

void Selectionwindow::initcourse()
{
    query= QSqlQuery(dbconn);
    QString S =QString("drop table if exists selectedcourse; create table selectedcourse select * from excourse as a "
                       "join selection as b where a.Sno=b.SSno and a.Cno=b.SCno; ");

    QString SS=QString("select Cno, Cname, Ccategory, Cschool, CTname, CTtitle, CTschool, Cperiod, Ccredit, CSnumbermax, "
                       "Csnumber, Cplace, Ctime1, Ctime2, Ctime3 from excourse where Sno='%1' and Cno not in (select Cno "
                       "from selectedcourse); ").arg(this->loginno);
                        //在数据库中根据学生所在学院和开课学院，将学生和课程两个实体所在的表进行连接运算，获取学生个人专属课程数据
                        //excourse表。查询可选课程时，有的课程已经被选，这时在excourse表中利用in运算，将已选的课程剔除出查询结果
    QString SSS=QString("select Cno, Cname, Ccategory, Cschool, CTname, CTtitle, CTschool, Cperiod, Ccredit, CSnumbermax, "
                        "Csnumber, Cplace, Ctime1, Ctime2, Ctime3 from selectedcourse where selectedcourse.Sno='%1'; ").arg(this->loginno);
    int row1 = 0, row2 = 0, column =0;
    query.exec(S);
    if(query.exec(SS))
    {
        while(query.next())
        {
            ui->tableWidget->setRowCount(row1 + 1);//设置表格行数
            for(column=0;column<12;column++)
            {
                ui->tableWidget->setItem(row1,column,new QTableWidgetItem(query.value(column).toString()));
                ui->tableWidget->item(row1,column)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            }
            QString CCtime;
            QString CCtime1=query.value(12).toString();
            QString CCtime2=query.value(13).toString();
            QString CCtime3=query.value(14).toString();
            QString tab="\n";
            CCtime=QString("%1").arg(CCtime1);
            if(!query.value(13).toString().isEmpty())
            {
                CCtime=QString("%1%2%3").arg(CCtime1,tab,CCtime2);
            }
            if(!query.value(14).toString().isEmpty())
            {
                CCtime=QString("%1%2%3%4%5").arg(CCtime1,tab,CCtime2,tab,CCtime3);
            }
            QTableWidgetItem *CCitem = new QTableWidgetItem(CCtime);
            ui->tableWidget->setItem(row1,12,CCitem);
            ui->tableWidget->item(row1,12)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            ui->tableWidget->resizeRowsToContents();
            row1 ++;
        }
    }
    if(query.exec(SSS)) //这里不可用else if语句，否则进入界面后在已选课程表tableWidget_2中看不到已选课程，只有在进行选课之后才看得到
    {
       while(query.next())
       {
           //以下是将除了已选课程时间以外的已选课程信息展示到tableWidget_2当中
           ui->tableWidget_2->setRowCount(row2 + 1);//设置表格行数
           for(column=0;column<12;column++)
           {
               ui->tableWidget_2->setItem(row2,column,new QTableWidgetItem(query.value(column).toString()));
               ui->tableWidget_2->item(row2,column)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
           }
           //以下是将已选课程的三个课程时间合并展示到tableWidget_2当中
           QString CCCtime;
           QString CCCtime1=query.value(12).toString();//获取课程时间Ctime1
           QString CCCtime2=query.value(13).toString();//获取课程时间Ctime2
           QString CCCtime3=query.value(14).toString();//获取课程时间Ctime3
           QString ttab="\n"; //换行符
           CCCtime=QString("%1").arg(CCCtime1); //课程时间Ctime1在数据库中设置为非空
           if(!query.value(13).toString().isEmpty())    //如果课程时间Ctime2非空，合并Ctime1和Ctime2
           {
               CCCtime=QString("%1%2%3").arg(CCCtime1,ttab,CCCtime2);
           }
           if(!query.value(14).toString().isEmpty())    //如果课程时间Ctime3非空，合并Ctime1，Ctime2和Ctime3
           {
               CCCtime=QString("%1%2%3%4%5").arg(CCCtime1,ttab,CCCtime2,ttab,CCCtime3);
           }

           QTableWidgetItem *CCCitem = new QTableWidgetItem(CCCtime);
           ui->tableWidget_2->setItem(row2,12,CCCitem);
           ui->tableWidget_2->item(row2,12)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
           ui->tableWidget_2->resizeRowsToContents(); //根据内容调整tableWidget_2的行高
           row2 ++;
       }
    }
    QTableWidgetItem* iitem;
    int current_credit = 0;
    SCcredit_sum = 0;
    for (int tablerow=0;tablerow < ui->tableWidget_2->rowCount(); tablerow++)
    {
        iitem = ui->tableWidget_2->item(tablerow,8);
        current_credit = iitem->text().toInt();
        SCcredit_sum = SCcredit_sum + current_credit;
    }
    ui->label_3->setNum(SCcredit_sum);
}


void Selectionwindow::on_selectButton_clicked() //用以进行选课操作，即将可选课程选入已选课程，选课操作要注意人数上限和上课时间冲突等问题
{
    //this->initcourse();//2022.5.3注选课前先初始化可选课程和已选课程表并显示在tablewidget_2中
    //2022.5.4这一句不能加，否则click事件只对第一行有效，其他行的数据是空值
    //选课考虑学生容量冲突、上课时间冲突
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
    if(!items.empty())
    {
        int currentrow = ui->tableWidget->currentRow(); //获取当前行信息
        QTableWidgetItem *item = items.value(0); //获取选中课程编号
        SCno= item->text(); //获取选中课程编号
        QTableWidgetItem *item_0 = items.value(1); //获取选中课程名称
        SCname = item_0->text();    //获取选中课程名称
        QTableWidgetItem *item_1=items.value(9);   //获取选中课程最大上课学生人数
        SCSnumbermax = item_1->text().toInt(); //获取选中课程最大上课学生人数
        QTableWidgetItem *item_2=items.value(10);  //获取选中课程当前上课学生人数
        SCSnumber = item_2->text().toInt(); //获取选中课程当前上课学生人数
        QTableWidgetItem *item_3 = items.value(12); //获取选中课程时间Ctime1
        QStringList CtimeList= item_3->text().split("\n");  //初始化时课程时间合并，因此此处需要根据换行符拆分字符串判断上课时间有几个
        int listcount = CtimeList.count();  //根据换行符判断上课时间有几个
        int SCtimejudge_flag=1;
        if(SCSnumber < SCSnumbermax) //先把判断当前选课人数是否达到课程最大学生人数,若未达到，再进行选课时间是否冲突的判定
        {
            //选课时间冲突判定
            QString SCtimejudge_1,SCtimejudge_2,SCtimejudge_3;
            if(listcount == 2)
            {
               SCtime_1 = CtimeList[0];
               SCtime_2 = CtimeList[1];
               SCtime_3 = "";
               SCtimejudge_1 = QString("select * from selectedcourse where Sno ='%1' and Ctime1 in ('%2','%3')").arg(loginno).arg(SCtime_1).arg(SCtime_2);
               SCtimejudge_2 = QString("select * from selectedcourse where Sno ='%1' and Ctime2 in ('%2','%3')").arg(loginno).arg(SCtime_1).arg(SCtime_2);
               SCtimejudge_3 = QString("select * from selectedcourse where Sno ='%1' and Ctime3 in ('%2','%3')").arg(loginno).arg(SCtime_1).arg(SCtime_2);
               query.exec(SCtimejudge_1);
               if(query.first())
               {
                   SCtimejudge_flag=0;
               }
               query.exec(SCtimejudge_2);
               if(query.first())
               {
                    SCtimejudge_flag=0;
               }
               query.exec(SCtimejudge_3);
               if(query.first())
               {
                    SCtimejudge_flag=0;
               }
            }
            else if(listcount == 3)
            {
                SCtime_1 = CtimeList[0];
                SCtime_2 = CtimeList[1];
                SCtime_3 = CtimeList[2];
                SCtimejudge_1 = QString("select * from selectedcourse where Sno ='%1' and Ctime1 in ('%2','%3','%4'))").arg(loginno).arg(SCtime_1).arg(SCtime_2).arg(SCtime_3);
                SCtimejudge_2 = QString("select * from selectedcourse where Sno ='%1' and Ctime2 in ('%2','%3','%4'))").arg(loginno).arg(SCtime_1).arg(SCtime_2).arg(SCtime_3);
                SCtimejudge_3 = QString("select * from selectedcourse where Sno ='%1' and Ctime3 in ('%2','%3','%4'))").arg(loginno).arg(SCtime_1).arg(SCtime_2).arg(SCtime_3);
                query.exec(SCtimejudge_1);
                if(query.first())
                {
                    SCtimejudge_flag=0;
                }
                query.exec(SCtimejudge_2);
                if(query.first())
                {
                    SCtimejudge_flag=0;
                }
                query.exec(SCtimejudge_3);
                if(query.first())
                {
                     SCtimejudge_flag=0;
                }
            }
            else
            {
                SCtime_1 = CtimeList[0];
                SCtime_2 = "";
                SCtime_3 = "";
                SCtimejudge_1 = QString("select * from selectedcourse where Sno ='%1' and (Ctime1 ='%2' or Ctime2='%2' or "
                                        "Ctime3='%2')").arg(loginno).arg(SCtime_1);
                query.exec(SCtimejudge_1);
                if(query.first())
                {
                    SCtimejudge_flag=0;
                }
            }
            //根据SCtimejudge_flag的值判断是否可以正常选课
            if(SCtimejudge_flag==1)
            {
                //可以正常选课
                QString select = QString("insert into selection(SSno,SCno) values('%1','%2')").arg(loginno).arg(SCno);
                query.exec(select); //将选课记录插入`selection`实体
                QString addSC = QString("drop table if exists selectedcourse; create table selectedcourse select * "
                                       "from excourse as a join selection as b where a.Sno=b.SSno and a.Cno=b.SCno;");
                QString selectSC = QString("select Cno, Cname, Ccategory, Cschool, CTname, CTtitle, CTschool, Cperiod,"
                                          " Ccredit, CSnumbermax, Csnumber, Cplace, Ctime1, Ctime2, Ctime3 from "
                                          "selectedcourse where Sno='%1'; " ).arg(loginno); //筛选已选课程选课数据
                int row1 = 0, row2 = 0, column =0;
                query.exec(addSC);
                if(currentrow != -1)
                {
                    ui->tableWidget->removeRow(currentrow); //删除选中的行
                    ui->tableWidget->setCurrentItem(nullptr);  //取消选中的行，即每次删除时需要选择删除哪行
                }

                if(query.exec(selectSC))
                {
                    while(query.next())
                    {
                        //记录符合条件的课程序号
                        //在表selection中筛选上述符合条件的课程序号
                         //如果学生所在学院和开课学院对得上且通过学号课程号关系知道课程没被选。。。填入tablewidget
                        ui->tableWidget_2->setRowCount(row2 + 1);//设置表格行数
                        for(column=0;column<12;column++)
                        {
                            ui->tableWidget_2->setItem(row2,column,new QTableWidgetItem(query.value(column).toString()));
                            ui->tableWidget_2->item(row2,column)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
                        }
                        QString SSCtime;
                        QString SSCtime1 = query.value(12).toString();
                        QString SSCtime2 = query.value(13).toString();
                        QString SSCtime3 = query.value(14).toString();
                        QString SStab="\n";
                        SSCtime=QString("%1").arg(SSCtime1);
                        if(!query.value(13).toString().isEmpty())
                        {
                            SSCtime = QString("%1%2%3").arg(SSCtime1,SStab,SSCtime2);
                        }
                        if(!query.value(14).toString().isEmpty())
                        {
                            SSCtime = QString("%1%2%3%4%5").arg(SSCtime1,SStab,SSCtime2,SStab,SSCtime3);
                        }
                        QTableWidgetItem *SSCitem = new QTableWidgetItem(SSCtime);
                        ui->tableWidget_2->setItem(row2,12,SSCitem);
                        ui->tableWidget_2->item(row2,12)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
                        ui->tableWidget_2->resizeRowsToContents();
                        row2++;
                    }
                }
                else
                {
                   while(query.next())
                   {
                       ui->tableWidget->setRowCount(row1 + 1);//设置表格行数
                       for(column=0;column<12;column++)
                       {
                           ui->tableWidget->setItem(row1,column,new QTableWidgetItem(query.value(column).toString()));
                           ui->tableWidget->item(row1,column)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
                       }
                       QString SSSCtime;
                       QString SSSCtime1 = query.value(12).toString();
                       QString SSSCtime2 = query.value(13).toString();
                       QString SSSCtime3 = query.value(14).toString();
                       QString SSStab = "\n";
                       SSSCtime=QString("%1").arg(SSSCtime1);
                       if(!query.value(13).toString().isEmpty())
                       {
                           SSSCtime=QString("%1%2%3").arg(SSSCtime1,SSStab,SSSCtime2);
                       }
                       if(!query.value(14).toString().isEmpty())
                       {
                           SSSCtime=QString("%1%2%3%4%5").arg(SSSCtime1,SSStab,SSSCtime2,SSStab,SSSCtime3);
                       }
                       QTableWidgetItem *SSSCitem = new QTableWidgetItem(SSSCtime);
                       ui->tableWidget->setItem(row1,12,SSSCitem);
                       ui->tableWidget->item(row1,12)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
                       ui->tableWidget->resizeRowsToContents();
                       row1 ++;
                   }

                }
                QString selectionlog = QString("insert into courselog(CLSno, CLCno, CLCname, CLoperation, "
                                              "CLOPcategory, CLOPtime) values('%1', '%2', '%3','选课','正常', "
                                              "NOW()); ").arg(loginno).arg(SCno).arg(SCname);
                query.exec(selectionlog);
            }
            else if(SCtimejudge_flag==0)
            {
                //弹出无法选课消息提示框
                QString message_1 = QString("<font size='5' color='black'>所选课程： %1 与已选课程时间冲突，请重新选择！</font>").arg(items.at(1)->text());
                QMessageBox msgBox_1(QMessageBox::Critical,QString("选课失败！"),message_1);
                msgBox_1.setStyleSheet("QPushButton {"
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
                msgBox_1.exec();
            }
        }
        else //若当前选课人数以达到达到课程最大学生人数
        {
            QString message_2=QString("<font size='5' color='black'>所选课程： %1 人数已满，请重新选择！</font>").arg(items.at(1)->text());
            QMessageBox msgBox_2(QMessageBox::Critical,QString("选课失败！"),message_2);
            msgBox_2.setStyleSheet("QPushButton {"
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
            msgBox_2.exec();
        }
    }
    QTableWidgetItem* iitem;
    int current_credit = 0;
    SCcredit_sum = 0;
    for (int tablerow=0;tablerow < ui->tableWidget_2->rowCount(); tablerow++)
    {
        iitem = ui->tableWidget_2->item(tablerow,8);
        current_credit = iitem->text().toInt();
        SCcredit_sum = SCcredit_sum + current_credit;
    }
    ui->label_3->setNum(SCcredit_sum);
}

void Selectionwindow::on_returnButton_clicked()
{
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    QList<QTableWidgetItem*> items = ui->tableWidget_2->selectedItems();
    if(!items.empty())
    {
        int currentrow = ui->tableWidget_2->currentRow(); //获取当前行信息
        QTableWidgetItem *item_4 = items.value(0); //获取选中课程编号
        SCno= item_4->text(); //获取选中课程编号
        QTableWidgetItem *item_5 = items.value(1); //获取选中课程名称
        SCname = item_5->text();    //获取选中课程名称
        QString returnSC = QString("drop table if exists returnSC; create table returnSC select * from selection "
                                   "where SSno = '%1' and SCno != '%2'; ").arg(loginno).arg(SCno);
        //重新构建selection表
        QString updateselection = QString("drop table if exists selection; create table selection select * from returnSC;");
        //重新创建selectedcourse表
        QString updateSC = QString("drop table if exists selectedcourse; create table selectedcourse select * from excourse as a "
                             "join selection as b where a.Sno=b.SSno and a.Cno=b.SCno;");
        QString select_updateSC = QString("select Cno, Cname, Ccategory, Cschool, CTname, CTtitle, CTschool, Cperiod,"
                                  " Ccredit, CSnumbermax, Csnumber, Cplace, Ctime1, Ctime2, Ctime3 from "
                                  "selectedcourse;" ); //筛选已选课程选课数据
        QString select_excourse = QString("select Cno, Cname, Ccategory, Cschool, CTname, CTtitle, CTschool, Cperiod, Ccredit, CSnumbermax, "
                                         "Csnumber, Cplace, Ctime1, Ctime2, Ctime3 from excourse where Sno='%1' and Cno not in (select Cno "
                                         "from selectedcourse); ").arg(loginno);
                                           //筛选可选课程选课数据
        query.exec(returnSC);
        query.exec(updateselection);
        query.exec(updateSC);
        if(currentrow != -1)
        {
            ui->tableWidget_2->removeRow(currentrow); //删除选中的行
            ui->tableWidget_2->setCurrentItem(nullptr);  //取消选中的行，即每次删除时需要选择删除哪行
        }
        int row1 = 0, row2 = 0, column = 0;
        if(query.exec(select_updateSC))
        {
            while(query.next())
            {
                //记录符合条件的课程序号
                //在表selection中筛选上述符合条件的课程序号
                 //如果学生所在学院和开课学院对得上且通过学号课程号关系知道课程没被选。。。填入tablewidget
                ui->tableWidget_2->setRowCount(row2 + 1);//设置表格行数
                for(column=0;column<12;column++)
                {
                    ui->tableWidget_2->setItem(row2,column,new QTableWidgetItem(query.value(column).toString()));
                    ui->tableWidget_2->item(row2,column)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
                }
                QString SSCtime;
                QString SSCtime1 = query.value(12).toString();
                QString SSCtime2 = query.value(13).toString();
                QString SSCtime3 = query.value(14).toString();
                QString SStab="\n";
                SSCtime=QString("%1").arg(SSCtime1);
                if(!query.value(13).toString().isEmpty())
                {
                    SSCtime = QString("%1%2%3").arg(SSCtime1,SStab,SSCtime2);
                }
                if(!query.value(14).toString().isEmpty())
                {
                    SSCtime = QString("%1%2%3%4%5").arg(SSCtime1,SStab,SSCtime2,SStab,SSCtime3);
                }
                QTableWidgetItem *SSCitem = new QTableWidgetItem(SSCtime);
                ui->tableWidget_2->setItem(row2,12,SSCitem);
                ui->tableWidget_2->item(row2,12)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
                ui->tableWidget_2->resizeRowsToContents();
                row2++;
            }
        }
        if(query.exec(select_excourse))
        {
           while(query.next())
           {
               ui->tableWidget->setRowCount(row1 + 1);//设置表格行数
               for(column=0;column<12;column++)
               {
                   ui->tableWidget->setItem(row1,column,new QTableWidgetItem(query.value(column).toString()));
                   ui->tableWidget->item(row1,column)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
               }
               QString SSSCtime;
               QString SSSCtime1 = query.value(12).toString();
               QString SSSCtime2 = query.value(13).toString();
               QString SSSCtime3 = query.value(14).toString();
               QString SSStab = "\n";
               SSSCtime=QString("%1").arg(SSSCtime1);
               if(!query.value(13).toString().isEmpty())
               {
                   SSSCtime=QString("%1%2%3").arg(SSSCtime1,SSStab,SSSCtime2);
               }
               if(!query.value(14).toString().isEmpty())
               {
                   SSSCtime=QString("%1%2%3%4%5").arg(SSSCtime1,SSStab,SSSCtime2,SSStab,SSSCtime3);
               }
               QTableWidgetItem *SSSCitem = new QTableWidgetItem(SSSCtime);
               ui->tableWidget->setItem(row1,12,SSSCitem);
               ui->tableWidget->item(row1,12)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
               ui->tableWidget->resizeRowsToContents();
               row1 ++;
           }
        }


        QString returnSClog = QString("insert into courselog(CLSno, CLCno, CLCname, CLoperation, CLOPcategory, CLOPtime) "
                                      "values('%1', '%2', '%3','退课','正常', NOW()); ").arg(loginno).arg(SCno).arg(SCname);
        query.exec(returnSClog);
    }
    QTableWidgetItem* iitem;
    int current_credit = 0;
    SCcredit_sum = 0;
    for (int tablerow=0;tablerow < ui->tableWidget_2->rowCount(); tablerow++)
    {
        iitem = ui->tableWidget_2->item(tablerow,8);
        current_credit = iitem->text().toInt();
        SCcredit_sum = SCcredit_sum + current_credit;
    }
    ui->label_3->setNum(SCcredit_sum);
}


