#ifndef TEST1117_H
#define TEST1117_H
#include<cstdlib>
#include"datadef.h"
#include<ostream>


/**
*@Project Name:  test1113A
*@ClassName %{Class}
*@Time:  2021-11-17
*@Author:  Hu Kuanhu
*@Brief: 纯C++类
*
*/
class test1117
{
public:
    test1117();
    void test();

    template<class T>
    void out(const T &str)
    {
        std::cout<<"template function:"<<str<<std::endl;
    }

    friend std::ostream& operator<< ( std::ostream &os,const test1117 &o);

    friend std::istream &operator>> (std::istream &is,test1117 &o)
    {
        return is;
    }

    friend std::vector<int>& makevector(std::vector<int> &o);

    template<class T>
    friend std::string &operator<<(std::string &str,const T &t)
    {
        str.append(t);
        return str;
    }

private:
    int a;
};

std::vector<int>& makevector(std::vector<int> &o);

#endif // TEST1117_H
