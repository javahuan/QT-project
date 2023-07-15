#ifndef SET_H
#define SET_H

#include <QWidget>

namespace Ui {
class Set;///////////////////////////登录成功后的管理员界面/////////////////////////
}

class Set : public QWidget
{
    Q_OBJECT

public:
    explicit Set(QWidget *parent = nullptr);
    ~Set();

private slots:
    void on_quit_clicked();

    void on_find_clicked();

    void on_Add_clicked();

    void on_pushButton_clicked();

    void on_Abs_clicked();

    void on_switch_2_clicked();

    void on_money_clicked();

private:
    Ui::Set *ui;
};
int GetOrder();//后面用于传递商品序号
#endif // SET_H
