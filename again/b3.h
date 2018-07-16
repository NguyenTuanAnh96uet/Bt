#ifndef B3_H
#define B3_H
#include "b1.h"
class B3: public B1
{
public:
    B3();
    ~B3();
public:
    float getSoC() const;
    void setSoC(float value);
public:
    double timV();
    void nhap3();
    void xuatTB();
protected:
    float soC;
};
#endif // B3_H
