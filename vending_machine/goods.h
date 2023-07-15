#ifndef GOODS_H
#define GOODS_H

#include <QObject>

class Goods : public QObject
{
    Q_OBJECT
public:
    explicit Goods(QObject *parent = nullptr);
    Goods(QString name,int price);
    virtual QString GetName()=0;
    virtual int  GetPrice()=0;
    virtual int GetNum()=0;
    virtual int Getsale()=0;
    static int money_1;
    static int money_5;
     static int money_10;
protected:
    QString name;
    int price;

signals:
};

class Goods_A: virtual public Goods{
public:
    Goods_A();
    QString GetName();
    int  GetPrice();
    int GetNum();
    void DownNum();
    int Getsale();
    void AddNum(int numb);
    void MinusNum(int numb);
private:
    static int num;
    static int sale;
};
class Goods_B: virtual public Goods{
public:
    Goods_B();
    QString GetName();
    int  GetPrice();
    int GetNum();
    void DownNum();
    int Getsale();
    void AddNum(int numb);
    void MinusNum(int numb);
private:
    static int num;
    static int sale;
};
class Goods_C: virtual public Goods{
public:
    Goods_C();
    QString GetName();
    int  GetPrice();
    int GetNum();
    void DownNum();
    int Getsale();
    void AddNum(int numb);
    void MinusNum(int numb);
private:
    static int num;
    static int sale;
};
#endif // GOODS_H
