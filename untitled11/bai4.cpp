#include "bai4.h"
#include <QDebug>
Bai4::Bai4(QObject *parent)
    : QObject(parent)
{

}

Bai4::~Bai4()
{

}
int Bai4::nam(int m_day)
{
     return m_day/365;
}
int Bai4::thang(int m_day)
{
     return (m_day%365)/30;
}
int Bai4::ngay(int m_day)
{
     return (m_day%365)%30;
}


