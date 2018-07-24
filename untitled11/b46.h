#ifndef B46_H
#define B46_H
#include <QObject>
#include <iostream>
#include <QString>

using namespace std;

class B46: public QObject
{
    Q_OBJECT
    Q_PROPERTY(int doC READ doC WRITE setdoC NOTIFY doCChanged)
 public:
    int doC() const
    {
        return m_doC;
    }
public:

    B46(QObject *parent = 0);
public:
    Q_INVOKABLE float convert(QString t, int z);
public slots:

    void setdoC(int doC)
    {
        if (m_doC == doC)
            return;
        m_doC = doC;
        emit doCChanged(doC);
    }

signals:
    void doCChanged(int doC);

private:
    int m_doC;
    char t;


};

#endif // B46_H
