#ifndef ADD_H
#define ADD_H

#include <QWidget>

namespace Ui {
class add;//补货
}

class add : public QWidget
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = nullptr);
    ~add();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::add *ui;
};

#endif // ADD_H
