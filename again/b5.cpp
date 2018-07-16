#include "b5.h"
B5::B5()
{

}

B5::~B5()
{

}
double B5::timTotal()
{
    return timTong()*timTong()+timTich()*(timTong()-soA)*(timTich()+soB);
}
void B5::xuatTotal()
{
    qDebug() << "Total= " << timTotal();
}
