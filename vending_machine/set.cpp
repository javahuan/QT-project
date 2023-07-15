#include "set.h"
#include"add.h"
#include "qmessagebox.h"
#include "ui_set.h"
#include "mainwindow.h"
#include "goods.h"
#include <iostream>
#include<QDebug>
#include <QApplication>
#include<minus.h>
#include<state.h>
#include "money.h"
Set::Set(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Set)
{
    ui->setupUi(this);
    Goods_A a;
    int numa=a.GetNum();
    QString n=QString::number(numa);//int->QString    //ui->A_name->setText(n);//里面只能用QString+
    //*********************填表*************************//
    QTableWidgetItem *item0 = new QTableWidgetItem(n);
    ui->table->setItem(0,2,item0);
    QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(a.GetPrice()));
    ui->table->setItem(0,1,item1);
    QTableWidgetItem *sale1 =new QTableWidgetItem(QString::number(a.Getsale()));
     ui->table->setItem(0,3,sale1);
    QTableWidgetItem *salemoney1 =new QTableWidgetItem(QString::number(a.Getsale()*a.GetPrice()));
     ui->table->setItem(0,4,salemoney1);
     Goods_B b;
    QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(b.GetNum()));
      ui->table->setItem(1,2,item2);
     QTableWidgetItem *item3= new QTableWidgetItem(QString::number(b.GetPrice()));
    ui->table->setItem(1,1,item3);
     QTableWidgetItem *sale2 =new QTableWidgetItem(QString::number(b.Getsale()));
        ui->table->setItem(1,3,sale2);
      QTableWidgetItem *salemoney2 =new QTableWidgetItem(QString::number(b.Getsale()*b.GetPrice()));
      ui->table->setItem(1,4,salemoney2);
    Goods_C c;
    QTableWidgetItem *item4 = new QTableWidgetItem(QString::number(c.GetNum()));
       ui->table->setItem(2,2,item4);
    QTableWidgetItem *item5= new QTableWidgetItem(QString::number(c.GetPrice()));
     ui->table->setItem(2,1,item5);
     QTableWidgetItem *sale3 =new QTableWidgetItem(QString::number(c.Getsale()));
         ui->table->setItem(2,3,sale3);
    QTableWidgetItem *salemoney3 =new QTableWidgetItem(QString::number(c.Getsale()*c.GetPrice()));
    ui->table->setItem(2,4,salemoney3);
}

Set::~Set()
{
    delete ui;
}

void Set::on_quit_clicked()
{
    this->close();
    MainWindow*a=new MainWindow;
    a->show();
}
int order=0;
//****************增货
void Set::on_Add_clicked()
{
    QMessageBox msgBox;
     msgBox.setText("请选择需要增货的货品编号");
    QPushButton *Button1= msgBox.addButton(tr("1"),QMessageBox::ActionRole);
    QPushButton *Button2= msgBox.addButton(tr("2"),QMessageBox::ActionRole);
    QPushButton *Button3= msgBox.addButton(tr("3"),QMessageBox::ActionRole);
   QPushButton *Button4= msgBox.addButton(QMessageBox::Cancel);
    msgBox.setWindowTitle("商品补货");
    msgBox.exec();

    if(msgBox.clickedButton() == Button1){
        order=1;
    }
    else if(msgBox.clickedButton() == Button2){
        order=2;
    }
    else if(msgBox.clickedButton() == Button3)
        order=3;
 if(msgBox.clickedButton() != Button4){
        add *a=new add;
        a->show();
    }
}
int GetOrder(){
    return order;
}


void Set::on_pushButton_clicked()
{
    close();
    Set *a=new Set;
    a->show();
}

//***********减货
void Set::on_Abs_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("请选择需要减货的货品编号");
    QPushButton *Button1= msgBox.addButton(tr("1"),QMessageBox::ActionRole);
    QPushButton *Button2= msgBox.addButton(tr("2"),QMessageBox::ActionRole);
    QPushButton *Button3= msgBox.addButton(tr("3"),QMessageBox::ActionRole);
    QPushButton *Button4= msgBox.addButton(QMessageBox::Cancel);
    msgBox.setWindowTitle("商品减货");
    msgBox.exec();

    if(msgBox.clickedButton() == Button1){
        order=1;
    }
    else if(msgBox.clickedButton() == Button2){
        order=2;
    }
    else if(msgBox.clickedButton() == Button3)
        order=3;
    if(msgBox.clickedButton() != Button4){
         minus *a=new minus;
        a->show();
    }
}
void Set::on_switch_2_clicked()
{
    state *a=new state;
    a->show();
}


void Set::on_money_clicked()
{
    money *a=new money;
    a->show();
}

