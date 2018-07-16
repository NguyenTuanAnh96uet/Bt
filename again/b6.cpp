#include "b6.h"

B6::B6()
{

}
B6 B6::operator+(const B6 &s)
{
    B6 z;
    z.soA = this->soA + s.soA;
    z.soB = this->soB + s.soB;
    return z;
}
void B6::xuatSp()
{
    qDebug() << "ket qua la: " << soA << "+" << soB << "i";
}
