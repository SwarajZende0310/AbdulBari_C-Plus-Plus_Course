#include <iostream>

using namespace std;

class Parent
{
public:
    void display()
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
    cout<<"    :::Base Class Object:::"<<endl;
    Parent x;
    x.display();

    cout<<"    :::Derived Class Object:::"<<endl;
    Derived y;
    y.display();
    return 0;
}
