#ifndef BAI4_H
#define BAI4_H

#include <QObject>
#include <iostream>

using namespace std;

class Bai4: public QObject
{
    Q_OBJECT
    Q_PROPERTY(int day READ day WRITE setDay NOTIFY dayChanged)
public:
    Bai4(QObject *parent = 0);
    ~Bai4();
public:
   // Q_INVOKABLE void convert(int mDay);
    Q_INVOKABLE int nam(int m_day);
    Q_INVOKABLE int thang(int m_day);
    Q_INVOKABLE int ngay(int m_day);



public:
    int day() const
    {
        return m_day;
    }


public slots:
    void setDay(int day)
    {
        if (m_day == day)
            return;

        m_day = day;
        emit dayChanged(day);
    }

signals:
    void dayChanged(int day);

private:
    int m_day;
};

#endif // BAI4_H
