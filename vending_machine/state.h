#ifndef STATE_H
#define STATE_H

#include <QWidget>

namespace Ui {
class state;
}

class state : public QWidget
{
    Q_OBJECT

public:
    explicit state(QWidget *parent = nullptr);
    ~state();

private slots:
    void on_close_clicked();

    void on_open_clicked();

    void on_pushButton_clicked();

private:
    Ui::state *ui;
};
int  GetFlag();
#endif // STATE_H
