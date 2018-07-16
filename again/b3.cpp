#include "b3.h"
B3::B3()
{

}

B3::~B3()
{

}


float B3::getSoC() const
{
    return soC;
}

void B3::setSoC(float value)
{
    soC = value;
}

double B3::timV()
{
    return soA+soB*soC;
}
void B3::nhap3()
{
    BaseClass::nhap();
    cin >> soA >> soB >>soC;
}
void B3::xuatTB()
{
    qDebug() << "toc do cua xe la: " << timV();
}
