#include <iostream>

using namespace std;

class Base
{
    public:
    int x;
    Base()
    {
        cout<<"Default Constructor from Base"<<endl;
    }
    Base(int x)
    {
        cout<<"Parameterized Constructor from Base "<<x<<endl;
    }
};

class Derived:public Base
{
public:
    int a;
    Derived()
    {
        cout<<"Default Constructor from Derived"<<endl;
    }
    Derived(int a)
    {
        cout<<"Parameterized Constructor from Derived "<<a<<endl;
    }
    Derived(int x,int a):Base(x)
    {
        cout<<"Parameterized Constructor from Derived "<<a<<endl;
    }
};
int main()
{
    cout << ":::Constructor in Inheritance:::" << endl;
    Derived d1;
    cout<<endl;
    Derived d2(10);
    cout<<endl;
    Derived d3(20,10);
    return 0;
}
