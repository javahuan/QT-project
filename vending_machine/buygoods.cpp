#include "buygoods.h"
#include "ui_buygoods.h"
#include"mainwindow.h"
#include<QMessageBox>
#include"goods.h"
BuyGoods::BuyGoods(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuyGoods)
{
    ui->setupUi(this);
}

BuyGoods::~BuyGoods()
{
    delete ui;
}

void BuyGoods::on_quit_clicked()
{
    this->close();
    MainWindow *a=new MainWindow;
    a->show();
}

void BuyGoods::on_two_clicked()
{
    QMessageBox a;
    Goods_A b;
    int n=b.GetNum();
    qDebug()<<b.GetNum();
    if(n==0){
       a.setText("抱歉，您想购买的商品已售罄！");
          a.setWindowTitle("售罄");
          a.exec();
    }
    else{
          if((Goods::money_1>2)&&(Goods::money_5>0)){
            b.DownNum();
              Goods::money_1-=3;
            Goods::money_5--;
              Goods::money_10++;
            a.setText("找您一个五元，三个一元，总计八元");
            a.setWindowTitle("找零");
            a.setStandardButtons(QMessageBox::Ok);
            a.exec();

          }
          else if((Goods::money_1>7)&&Goods::money_5==0){
            b.DownNum();
            Goods::money_1-=8;
              Goods::money_10++;
            //Goods_A::money_5--;
            a.setText("找您八个一元，总计八元");
            a.setWindowTitle("找零");
            a.setStandardButtons(QMessageBox::Ok);
            a.exec();
          }
          else{
            a.setText("抱歉！零钱不足，无法找零，已退还你的纸币！");
            a.setWindowTitle("无法找零");
            a.setStandardButtons(QMessageBox::Ok);
            a.exec();
          }
    }

}
void BuyGoods::on_three_clicked()//第二件商品
{       QMessageBox a;
    Goods_B b;
    int n=b.GetNum();
    //qDebug()<<b.GetNum();
    if(n==0){
          a.setText("抱歉，您想购买的商品已售罄！");
          a.setWindowTitle("售罄");
             a.exec();
    }
    else{
          if((Goods::money_1>1)&&(Goods::money_5>0)){
            b.DownNum();
            Goods::money_1-=2;
            Goods::money_5--;
            Goods::money_10++;
            a.setText("找您一个五元，两个一元，总计七元");
            a.setWindowTitle("找零");
            a.setStandardButtons(QMessageBox::Ok);
            a.exec();

          }
          else if((Goods::money_1>6)&&Goods::money_5==0){
            b.DownNum();
            Goods::money_1-=7;
            Goods::money_10++;
            //Goods_A::money_5--;
            a.setText("找您七个一元，总计七元");
            a.setWindowTitle("找零");
            a.setStandardButtons(QMessageBox::Ok);
            a.exec();
          }
          else{
            a.setText("抱歉！零钱不足，无法找零，已退还你的纸币！");
            a.setWindowTitle("无法找零");
            a.setStandardButtons(QMessageBox::Ok);
            a.exec();
          }
    }
}

void BuyGoods::on_six_clicked()
{
    QMessageBox a;
    Goods_C c;
    int n=c.GetNum();

    if(n==0){
    a.setText("抱歉，您想购买的商品已售罄！");
    a.setWindowTitle("售罄");
       a.exec();
    }
    else{
        if(Goods::money_1>3){
                 Goods::money_1-=4;
                Goods::money_10++;
            c.DownNum();
            a.setText("找您四个一元，总计四元");
            a.setWindowTitle("找零");
            a.setStandardButtons(QMessageBox::Ok);
            a.exec();
        }
        else{
            a.setText("抱歉！零钱不足，无法找零，已退还你的纸币！");
            a.setWindowTitle("无法找零");
            a.setStandardButtons(QMessageBox::Ok);
            a.exec();
        }
    }
}

