#ifndef B1_H
#define B1_H
#include "baseclass.h"
class b1: public BaseClass
{
protected:
    int a[100];
    int n;
public:
    b1();
public:
    virtual void nhap() override;
    int timMax();
    virtual void xuat() override;

};

#endif // B1_H
