#ifndef BUYGOODS_H
#define BUYGOODS_H

#include <QWidget>

namespace Ui {
class BuyGoods;/////////购买商品界面//////////////////////
}

class BuyGoods : public QWidget
{
    Q_OBJECT

public:
    explicit BuyGoods(QWidget *parent = nullptr);
    ~BuyGoods();

private slots:
    void on_quit_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_six_clicked();

private:
    Ui::BuyGoods *ui;
};

#endif // BUYGOODS_H
