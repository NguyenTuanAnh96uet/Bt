#include "b2.h"

b2::b2()
{

}

void b2::nhap()
{
    BaseClass::nhap();
    qDebug() << "du lieu nguoi dung";
    cin >> n;
    int *p=a;
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
}

void b2::xuat()
{
    BaseClass::xuat();
    for(int i=0;i<n;i++)
    {
        qDebug() <<a[i];
    }
}
