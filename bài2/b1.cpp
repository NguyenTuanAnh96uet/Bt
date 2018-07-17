#include "b1.h"

b1::b1()
{

}

void b1::nhap()
{
    BaseClass::nhap();
    qDebug() << " du lieu nguoi dung";
    cin >> n;
    qDebug() << "\n nhap cac phan tu cua du lieu";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
}
int b1::timMax()
{
    int *max=a;
    for (int i=0;i<n;i++)
    {
        if (*max<*(max+i)) *max=*(max+i);
    }
    return max;
}

void b1::xuat()
{
    BaseClass::xuat();
}
