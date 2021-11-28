#include "test1117b.h"

test1117B::test1117B(QObject *parent) : QObject(parent)
{

}

//QDebug &test1117B::operator<<(QDebug &os, const test1117B &b)
//{
//    return os;
//}

//QDebug &test1117B::operator <<(QDebug &os, test1117B &t)
//{
//    os<<t.a;
//    return os;
//}

void test1117B::test()
{
    switch (2) {
    case 2:{
        QString st;
        //st<<"jiji";
        break;}
    case 1:{
        qDebug()<<"rand_max:"<<RAND_MAX;

        QPair<std::string,int> pair("jj",1);

        //QMap
        break;}
    default:
        break;
    }

}




