#include "testwidget.h"
#include "ui_testwidget.h"

TestWidget::TestWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TestWidget)
{
    ui->setupUi(this);
}

TestWidget::~TestWidget()
{
    delete ui;
}


void TestWidget::on_pbTest1_clicked()
{
    switch (3) {
    case 4:{
        static int i=0;
        i=1;
        i++;
        qDebug()<<"i:"<<i;
        break;
    }
    case 3:{    //c++
        test1117 t7;
        t7.test();
        break;
    }
    case 2:{    //qt
        test1117B t7b;
        t7b.test();
        break;
    }
    case 1:{
        std::string s=";";
        s.append("jiij");
        out(__cplusplus);
        out("std::string size:");
        out(s.size());
     //   out(s);
        break;}
    case 0:{
        qDebug()<<INFINITY;
        out( isalpha(41));
        break;}
    default:
        break;
    }

}

void TestWidget::out(const QString &s)
{
    ui->txtMsg->append(s);
}

void TestWidget::out(const int &s)
{
    ui->txtMsg->append(QString::number(s));
}

//void TestWidget::out(const std::string &s)
//{

//    ui->txtMsg->append(QString::fromStdString(s));
//}


void TestWidget::on_pbqt_clicked()
{
    test1117B t7b;
    t7b.test();
}

void TestWidget::on_pbswitch_clicked()
{

    test1117B b;

    switch (3) {
    case 3:{
        OutStr str;
        (str<<"jiji"<<1).str;
        qDebug()<<str.str;
        break;
    }
    case 2:{
        QString str;
        QDebug debug(&str);
        debug<<"jijiij"<<1<<1.5<<QStringList("jijiji");
        qDebug()<<str;
        break;    }
    case 1:{
        b<<"jij";
        qDebug()<<b.str;
        (b<<"jijijij"<<"jxixixix").str;
        //(b<<1<<QStringList(2)<<1.2).str;
        qDebug()<<b.str;
        break;
    }
    default:break;
    }
}
