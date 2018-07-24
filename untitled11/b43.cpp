#include "b43.h"

B43::B43(QObject *parent)
    : QObject(parent)
{

}
int B43::convert(int x)
{

    if(x==0) return 0;
    else if(x==1) return 1;
    else return (convert(x-1)+convert(x-2))  ;
}
