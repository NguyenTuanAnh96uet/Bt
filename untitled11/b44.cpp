#include "b44.h"
#include <QDebug>
B44::B44(QObject *parent)
    : QObject(parent)
{

}
QString B44::test(QString x)
{
    QString result = "";

     if((x >= "A")&&(x <= "Z")||(x >= "a" && (x <= "z")))
     {
        return "kí tự vừa nhập là chữ cái";
     }
     else if ((x >= "0")&&(x <= "9"))
     {
         return "kí tự vừa nhập là chữ số";
     }
     else
     {
         return " kí tự vừa nhập là biểu tượng";
     }

     return result;

}
