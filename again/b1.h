#ifndef B1_H
#define B1_H

#include "baseclass.h"

class B1: public BaseClass
{
public:
    B1();
    ~B1();

public:
    int timTong();
    int timHieu();
    float timThuong();
    int timTich();

public:
   virtual void nhap() override;
    virtual void xuat() override;

//*public:
//     virtual float getSoA() const;
//     virtual void setSoA(float value);

//    virtual float getSoB() const;
//    virtu*/al void setSoB(float value);
public:
    void xuatSum();
    void xuatSub();
    void xuatMul();
    void xuatDiv();


protected:
    float soA;
    float soB;
};


#endif // B1_H
