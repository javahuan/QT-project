#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class login;//////////////////登录界面//////////////////////////////
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
