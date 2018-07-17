//#include <QCoreApplication>
#include "b1.h"
#include "b2.h"
int main()
{
    int select;
    qDebug() << "xin hay nhap lua chon cua b! :";
    cin >> select;
    switch(select)
    {
    case 1:
    {
        qDebug() << "day la y 1 bai 2";
        b1 *ng;
        b1 ng1;
        ng1.nhap();
        ng=&ng1;
        ng1.xuat();
        qDebug() << ng->timMax();
        break;
    }
    case 2:
    {
        qDebug() << "day la y 2 bai 2";
        b2 mang;
        mang.nhap();
        mang.xuat();
        break;
    }
    default: qDebug() << "xin hay nhap lai lua chon khac ";
    break;
    }
    return 0;
}
