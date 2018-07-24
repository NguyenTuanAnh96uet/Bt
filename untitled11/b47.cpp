#include "b47.h"

B47::B47(QObject *parent)
    : QObject(parent)
{

}

QString B47::convert(QString m_kitu)
{
     QString result = "";
    for (int i=0;i<m_kitu.length();i++)
      {
          if(m_kitu[i] == 'A' ||m_kitu[i] == 'E' ||m_kitu[i] == 'I' ||m_kitu[i] == 'O' ||m_kitu[i] == 'U')
          {
              nguyenamh++;
          }
          else if(m_kitu[i] == 'a' ||m_kitu[i] == 'e' ||m_kitu[i] == 'i' ||m_kitu[i] == 'o' ||m_kitu[i] == 'u')
          {
              nguyenamt++;
          }
          else if (m_kitu[i] >=65 && m_kitu[i] <=90)  phuamh++;
          else if (m_kitu[i] >=97 && m_kitu[i] <=122) phuamt++;
      }
      result.append(" nguyên âm hoa có: " );result.append(QString::number(nguyenamh));
      result.append(" số phụ âm hoa có ");result.append(QString::number(phuamh));
      result.append("số nguyên âm thường có: ");result.append(QString::number(nguyenamt));
      result.append("số phụ âm thường có ");result.append(QString::number(phuamt));
      return result;
}
