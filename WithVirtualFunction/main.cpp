#include <iostream>

using namespace std;

class Parent
{
public:
    virtual void display()
    {
        cout<<"Display from Base"<<endl;
    }
};
class Derived:public Parent
{
public:
    void display()
    {
       cout<<"Display from Derived"<<endl;
    }
};
int main()
{
    cout << "   Base Class Pointer,Derived Class Object Function Overriding::" << endl;
    Parent *p=new Derived();
    p->display();
    return 0;
}
