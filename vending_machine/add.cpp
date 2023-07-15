#include "add.h"
#include "qmessagebox.h"
#include "ui_add.h"
#include "set.h"
#include"goods.h"
add::add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
}

add::~add()
{
    delete ui;
}

void add::on_pushButton_2_clicked()
{
    this->close();
}


void add::on_pushButton_clicked()
{
    QMessageBox a;
    a.setText("添加成功");
    a.exec();
     QString numb=(ui->number->text());//获取输入的值
   int ord= GetOrder();
    // qDebug()<<ord;
     if(ord==1){
    Goods_A A;
     A.AddNum(numb.toInt());//QString转int
   // qDebug()<<A.GetNum();
     }
     if(ord==2){
    Goods_B B;
    B.AddNum(numb.toInt());//QString转int
   // qDebug()<<B.GetNum();
     }
     if(ord==3){
    Goods_C C;
    C.AddNum(numb.toInt());//QString转int
   // qDebug()<<C.GetNum();
     }

    close();
}

