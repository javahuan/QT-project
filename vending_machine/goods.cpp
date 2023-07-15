#include"goods.h"

Goods::Goods(QObject *parent)
    : QObject{parent}
{
}
Goods::Goods(QString name, int price)
{
    this->name=name;
    this->price=price;
   // this->num=num;
}
int Goods::money_1=25;
int Goods::money_5=5;
int Goods::money_10=0;
Goods_A::Goods_A():Goods("旺旺碎冰冰",2)
{
}

QString Goods_A::GetName()
{
    return name;
}

int Goods_A::GetPrice()
{
    return price;
}

int Goods_A::GetNum()
{
    return num;
}

void Goods_A::DownNum()
{
    num--;
     sale++;
}
int Goods_A::Getsale()
{
     return sale;
}

void Goods_A::AddNum(int numb)
{
     num=num+numb;
}

void Goods_A::MinusNum(int numb)
{
 num=num-numb;
}
int Goods_A::num=10;
int Goods_A::sale=0;

//*********************************************
Goods_B::Goods_B():Goods("百事可乐",3)
{
}

QString Goods_B::GetName()
{
    return name;
}

int Goods_B::GetPrice()
{
    return price;
}

int Goods_B::GetNum()
{
    return num;
}

void Goods_B::DownNum()
{
    num--;
     sale++;
}
int Goods_B::Getsale()
{
     return sale;
}

void Goods_B::AddNum(int numb)
{
num=num+numb;
}
void Goods_B::MinusNum(int numb)
{
num=num-numb;
}
int Goods_B::num=5;
int Goods_B::sale=0;

//*********************************************
Goods_C::Goods_C():Goods("旺旺牛奶",6)
{
}

QString Goods_C::GetName()
{
    return name;
}

int Goods_C::GetPrice()
{
    return price;
}

int Goods_C::GetNum()
{
    return num;
}

void Goods_C::DownNum()
{
    num--;
    sale++;
}

int Goods_C::Getsale()
{
    return sale;
}

void Goods_C::AddNum(int numb)
{
    num=num+numb;
}
void Goods_C::MinusNum(int numb)
{
    num=num-numb;
}
int Goods_C::num=6;
int Goods_C::sale=0;


