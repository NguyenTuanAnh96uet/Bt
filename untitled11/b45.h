#ifndef B45_H
#define B45_H
#include <QObject>
#include <iostream>
#include <QString>

using namespace std;

class B45: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString kitu READ kitu WRITE setkitu NOTIFY kituChanged)

public:
    QString kitu() const
    {
        return m_kitu;
    }
public:
    B45(QObject *parent = 0);

public:
    Q_INVOKABLE QString convert(QString m_kitu);


public slots:
    void setkitu(QString kitu)
    {
        if (m_kitu == kitu)
            return;

        m_kitu = kitu;
        emit kituChanged(kitu);
    }

signals:
    void kituChanged(QString kitu);

private:
    QString m_kitu;

};

#endif // B45_H
