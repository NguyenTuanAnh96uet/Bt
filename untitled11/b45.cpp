#include "b45.h"

B45::B45(QObject *parent)
    : QObject(parent)
{

}

QString B45::convert(QString m_kitu)
{
    char i;
    i=m_kitu[0].toLatin1();
    QString result=" ki tu before: ";
    result.append(QString(QChar::fromLatin1(i-1)));
    result.append(" ki tu after: ");
    result.append(QString(QChar::fromLatin1(i+1)));
    result.append(" \nma ascii: ");
    result.append(QString::number(i));
    return result;
}




