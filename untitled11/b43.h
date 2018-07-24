#ifndef B43_H
#define B43_H
#include <QObject>
#include <iostream>

using namespace std;

class B43: public QObject
{
    Q_OBJECT
    Q_PROPERTY(int n READ n WRITE setn NOTIFY nChanged)

public:
    int n() const
    {
        return m_n;
    }
public:
    B43(QObject *parent = 0);

public:
    Q_INVOKABLE int convert(int x);
public slots:
    void setn(int n)
    {
        if (m_n == n)
            return;

        m_n = n;
        emit nChanged(n);
    }

signals:
    void nChanged(int n);

private:
    int m_n;




};

#endif // B43_H
