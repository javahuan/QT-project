#ifndef MINUS_H
#define MINUS_H

#include <QWidget>

namespace Ui {
class minus;
}

class minus : public QWidget
{
    Q_OBJECT

public:
    explicit minus(QWidget *parent = nullptr);
    ~minus();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::minus *ui;
};

#endif // MINUS_H
