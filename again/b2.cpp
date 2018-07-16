#include "b2.h"
B2::B2()
{
}

B2::~B2()
{
}

float B2::timTB()
{
    return timTong()/float(2);
}

void B2::xuatTB()
{
    qDebug() << "trung binh cua 2 so la" << timTB();
}

