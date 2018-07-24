#ifndef B44_H
#define B44_H
#include <QObject>
#include <iostream>
#include <QString>

using namespace std;

class B44: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString y READ y WRITE sety NOTIFY yChanged)

public:
    QString y() const
    {
        return m_y;
    }
public:
    B44(QObject *parent = 0);

public:
    Q_INVOKABLE QString test(QString x);
public slots:
    void sety(QString y)
    {
        if (m_y == y)
            return;

        m_y = y;
        emit yChanged(y);
    }

signals:
    void yChanged(QString y);

private:
    QString m_y;

};

#endif // B44_H
