#include "minus.h"
#include "qmessagebox.h"
#include "ui_minus.h"
#include "set.h"
#include"goods.h"
minus::minus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::minus)
{
    ui->setupUi(this);
}

minus::~minus()
{
    delete ui;
}



void minus::on_pushButton_clicked()
{
    QMessageBox a;

    QString numb=(ui->number->text());//获取输入的值
    int ord= GetOrder();//商品序号
        // qDebug()<<ord;
    if(ord==1){
        Goods_A A;
        if(A.GetNum()<numb.toInt()){
            a.setText("余量不足，减货失败");
            a.exec();
        }
        else{
        A.MinusNum(numb.toInt());//QString转int
            a.setText("减货成功");
            a.exec();
        // qDebug()<<A.GetNum();
        }
    }
    if(ord==2){
        Goods_B B;
        if(B.GetNum()<numb.toInt()){
            a.setText("余量不足，减货失败");
            a.exec();
        }
        else{
            B.MinusNum(numb.toInt());//QString转int
            a.setText("减货成功");
            a.exec();
            // qDebug()<<A.GetNum();
        }
    }
    if(ord==3){
        Goods_C C;
        if(C.GetNum()<numb.toInt()){
            a.setText("余量不足，减货失败");
            a.exec();
        }
        else{
            C.MinusNum(numb.toInt());//QString转int
            a.setText("减货成功");
            a.exec();
            // qDebug()<<A.GetNum();
        }
    }
    close();
}


void minus::on_pushButton_2_clicked()
{
    this->close();
}

