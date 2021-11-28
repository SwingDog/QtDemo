#ifndef TEST1117B_H
#define TEST1117B_H

#include <QObject>
#include"datadef.h"
#include<QDebug>

/**
*@Project Name:  test1113A
*@ClassName %{Class}
*@Time:  2021-11-24
*@Author:  Hu Kuanhu
* QT类练习
*@Brief:
*/
class test1117B : public QObject
{
    Q_OBJECT
public:
    explicit test1117B(QObject *parent = 0);

    template<class T>
    test1117B& operator<< (const T &t)
    {
         str.append(QString(t));
         return *this;
    }

signals:
    
public slots:
    
public:
    int a;
    QString str;
    
public:
    void test();
};

class OutStr:public QObject
{
    Q_OBJECT
public:
    explicit OutStr(QObject *parent=0)
        :QObject(parent)
        ,str("")
        ,debug(QDebug(&str))
    {}

    static OutStr createOutStr()
    {
        OutStr str;
        return str;
    }

    template<class T>
    OutStr& operator <<(const T &t)
    {
        debug<<t;
        return *this;
    }

public:
    QString str;
    QDebug debug;
};

//OutStr createOutStr();
//OutStr createOutStr()
//{
//    OutStr str;
//    return str;
//}

#endif // TEST1117B_H
