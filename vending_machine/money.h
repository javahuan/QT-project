#ifndef MONEY_H
#define MONEY_H

#include <QWidget>

namespace Ui {
class money;
}

class money : public QWidget
{
    Q_OBJECT

public:
    explicit money(QWidget *parent = nullptr);
    ~money();

private slots:
    void on_pushButton_clicked();

private:
    Ui::money *ui;
};

#endif // MONEY_H
