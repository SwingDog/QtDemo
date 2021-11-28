#include "test1117.h"


test1117::test1117()
{

}

void test1117::test()
{
    switch (3) {
    case 3:{
        std::string str;
//        str<<"jij";
        std::cout<<str<<std::endl;
        break;
    }
    case 2:{
//        std::allocator<int>
        qDebug()<<"Jiji";
        std::cout<<"c plus plus"<<__cplusplus<<std::endl;
        QVector<int> v1={1,2,3};
        std::vector<int> v2={1,2,3};
        std::cout<<",v2 capacity:"<<v2.capacity()<<std::endl;

       // out("hahah");
        //snprintf()

        out(12);

        break;}
    case 1:{
        std::string str="jij";
        std::cout<<str<<std::endl;
        break;}
    default:
        break;
    }
}

std::vector<int>& makevector(std::vector<int> &o)
{
    return o;
}

//std::ostream& test1117::operator<< (std::ostream &os, const test1117 &o)
//{
//    os<<1<<o.a;
//    return os;
//}


