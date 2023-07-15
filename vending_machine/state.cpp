#include "state.h"
#include "qmessagebox.h"
#include "ui_state.h"

state::state(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::state)
{
    ui->setupUi(this);
}

state::~state()
{
    delete ui;
}
int flag=1;
int GetFlag()
{
    return flag;
}

void state::on_close_clicked()
{
    flag=0;
    QMessageBox a;
    a.setText("关闭售货机成功！");
    a.setWindowTitle("close");
    a.exec();
    close();
}

void state::on_open_clicked()
{
    flag=1;
    QMessageBox a;
    a.setText("打开售货机成功！");
    a.setWindowTitle("open");
    a.exec();
    close();
}


void state::on_pushButton_clicked()
{
    close();
}

