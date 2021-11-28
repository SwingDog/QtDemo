#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QWidget>
#include<QDebug>
#include<cmath>
#include<windows.h>
#include"datadef.h"
#include"test1117b.h"
#include"test1117.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TestWidget; }
QT_END_NAMESPACE

/**
 * @brief The TestWidget class
 * 2021.11.13 基础类的学习
 */
class TestWidget : public QWidget
{
    Q_OBJECT

public:
    TestWidget(QWidget *parent = 0);
    ~TestWidget();

private slots:
    void on_pbTest1_clicked();
    void out(const QString &s);
    void out(const int &);
   // void out(const std::string &s);

    void on_pbqt_clicked();

    void on_pbswitch_clicked();

private:
    Ui::TestWidget *ui;
};
#endif // TESTWIDGET_H
