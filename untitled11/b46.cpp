#include "b46.h"

B46::B46(QObject *parent)
    : QObject(parent)
{

}

float B46::convert(QString t, int z)
{
        if (t == QString("c")||t==QString("C")) return (float)(1.8*z +32);
        else return (float)(z - 32)/1.8;
}




