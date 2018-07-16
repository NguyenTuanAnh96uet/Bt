#include "b1.h"
#include <QDebug>
B1::B1()
{
}

B1::~B1()
{
}

int B1::timTong()
{
    return soA+soB;
}

int B1::timHieu()
{
    return soA-soB;
}
float B1::timThuong()
{
    if(soB==0) exit(0);
    else return soA/soB;
}

int B1::timTich()
{
    return soA*soB;
}

void B1::nhap()
{
    BaseClass::nhap();
    cin >> soA >> soB;
}

void B1::xuat()
{
    BaseClass::xuat();
    qDebug() << soA << soB;
}
void B1::xuatSum()
{
    qDebug() << " ket qua phep tong la: " << timTong();
}
void B1::xuatSub()
{
    qDebug() << " ket qua phep tru la: " << timHieu();
}
void B1::xuatMul()
{
    qDebug() << " ket qua phep nhan la: " << timTich();
}
void B1::xuatDiv()
{
    qDebug() << " ket qua phep chia la: " << timThuong();
}
//float B1::getSoA() const
//{
//    return soA;
//}

//void B1::setSoA(float value)
//{
//    soA = value;
//}

//float B1::getSoB() const
//{
//    return soB;
//}

//void B1::setSoB(float value)
//{
//    soB = value;
//}


