//#include <QCoreApplication>
#include "b1.h"
#include "b2.h"
#include "b3.h"
#include "b4.h"
#include "b5.h"
#include "b6.h"
#include "b7.h"
int main()
{
int select;
qDebug() << " xin hay nhap lua chon cua ban: ";
cin >> select;
switch(select){
case 1:
{
    qDebug() << "day la bai 1, tim tong hieu tich thuong cua 2 so";
    B1 s;
    s.nhap();
    s.xuatMul();
    s.xuatSub();
    s.xuatSum();
    s.xuatDiv();
    break;
}
case 2:
{
    qDebug() << " day la bai 2, tim tong va trung binh cong cua 2 so";
    B2 s1;
    s1.nhap();
    s1.xuatTB();
    s1.timTong();
    break;
}
case 3:
{
    qDebug() << "day la bai 3, tim van toc khi biet v0, gia toc a va thoi gian t";
    B3 s2;
    s2.nhap3();
    s2.xuatTB();
    break;
}
case 4:
{
    qDebug() << "day la bai 4, tim diem trung binh khi biet diem kt,gk,c.k";
    B4 s3;
    s3.nhap3();
    s3.xuatDiem();
    break;
}
case 5:
{
    qDebug() << "day la bai 5, tim tong tich va total";
    B5 s4;
    s4.nhap();
    s4.xuatSum();
    s4.xuatDiv();
    s4.xuatTotal();
    break;
}
case 6:
{
    qDebug() << " day la bai 6, su dung khai niem nap chong toan tu de tinh tong 2 so phuc";
    B6 s5,s6,s7;
    s5.nhap();
    s6.nhap();
    s7=s5+s6;
    s7.xuatSp();
    break;
}
case 7:
{
    qDebug() << " day la bai 7, nap chong toan tu 1 ngoi";
    B7 s8;
    s8.nhap();
    +s8;
    s8.xuatSp();
    s8.nhap();
    -s8;
    s8.xuatSp();
    break;
}

default: qDebug() << "xin hay nhap lai lua chon khac ";
break;
}
    return 0;
}
