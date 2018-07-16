#ifndef BASECLASS_H
#define BASECLASS_H


#include <QDebug>
#include <iostream>
using namespace std;
class BaseClass
{
public:
    BaseClass();
    ~BaseClass();
public:
    virtual void nhap();
    virtual void xuat();

};



#endif // BASECLASS_H
