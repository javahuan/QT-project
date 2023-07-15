#include "mainwindow.h"
#include "qmessagebox.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "state.h"
#include "buygoods.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(this,SIGNAL(Buy()),)
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushBuy_clicked()//购买
{state f;
    if(GetFlag()){
    this->close();
    BuyGoods *a=new BuyGoods;
    a->show();}
    else{
    QMessageBox a;
    a.setText("抱歉，售货机处于关闭状态！");
    a.setWindowTitle("Waring");
    a.exec();
    }
}

void MainWindow::on_pushSet_clicked()//登录界面
{
    this->close();
    login *a=new login;
    a->show();
}


void MainWindow::on_pushClose_clicked()//关闭
{
      this->close();
}


