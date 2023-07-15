#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow  ///////////////////////初始界面////////////////////////////
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
 signals:
private slots:

    void on_pushBuy_clicked();//进入购买商品

    void on_pushSet_clicked();//进入管理员模式

    void on_pushClose_clicked();//退出

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
