#include "b4.h"
B4::B4()
{

}

B4::~B4()
{

}
double B4::tinhDiem()
{
    return float(0.2)*timTong()+float(0.6)*soC;
}
void B4::xuatDiem()
{
    qDebug() << "diem trung binh cua sv la: " << tinhDiem() ;

}
