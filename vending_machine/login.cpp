#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "set.h"
#include<QMessageBox>
login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_2_clicked()//退出登录
{
    this->close();
    MainWindow *a=new MainWindow;
    a->show();
}


void login::on_pushButton_clicked()//登录
{   if((ui->user->text()==tr("mike"))&&(ui->password->text()==tr("123456")))
    {
          this->close();
        Set*a=new Set;
          a->show();
    }
    else
    {
          QMessageBox a;
          a.setText("账号或者密码错误！请重新输入。");
          a.setStandardButtons(QMessageBox::Ok|QMessageBox::Cancel);
          a.setWindowTitle("错误");
          a.exec();
    }
}

