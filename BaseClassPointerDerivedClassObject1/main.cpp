#include <iostream>

using namespace std;

class Base
{
public:
    void fun1()
    {
        cout<<"Fun1 of Base"<<endl;
    }
};
class Derived:public Base
{
public:
    void fun2()
    {
        cout<<"Fun2 of Derived"<<endl;
    }
};
int main()
{
    Derived x;
    x.fun1();
    x.fun2();

    cout<<"###  Base Class Pointer Derived Class Object  ###"<<endl;
    Derived y;
    Base *p=&y;
    p->fun1();
    //p->fun2(); Cannot call derived function using base class pointer

    Base z;
    //Derived *p2=&z;  Cannot have a Derived Class Pointer and Derived Class Object
    return 0;
}
