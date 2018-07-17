#ifndef B2_H
#define B2_H
#include "baseclass.h"



class b2 : public BaseClass
{
private:
    int a[100];
    int n;
public:
    b2();
public:
    virtual void nhap() override;
    virtual void xuat() override;
};

#endif // B2_H
