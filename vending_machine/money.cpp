#include "money.h"
#include "ui_money.h"
#include"goods.h"
money::money(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::money)
{
    ui->setupUi(this);
    Goods_A a;
    Goods_B b;
    Goods_C c;
    QTableWidgetItem *sale1 =new QTableWidgetItem(QString::number(a.Getsale()+b.Getsale()+c.Getsale()));
    ui->table->setItem(2,0,sale1);
    int yi=a.Getsale()*3+b.Getsale()*2+c.Getsale()*4;
    QTableWidgetItem *money1 =new QTableWidgetItem(QString::number(yi));
     ui->table->setItem(0,1,money1);
    QTableWidgetItem *money1_yu =new QTableWidgetItem(QString::number(Goods::money_1));
     ui->table->setItem(0,0,money1_yu);
    int wu=a.Getsale()+b.Getsale();
    QTableWidgetItem *money5 =new QTableWidgetItem(QString::number(wu));
    ui->table->setItem(1,1,money5);
    QTableWidgetItem *money5_yu =new QTableWidgetItem(QString::number(Goods_A::money_5));
    ui->table->setItem(1,0,money5_yu);
    //ui->one->setText(QString::number(Goods_A::money_1));
   // ui->five->setText(QString::number(Goods_A::money_5));
}

money::~money()
{
    delete ui;
}

void money::on_pushButton_clicked()
{
    close();
}

