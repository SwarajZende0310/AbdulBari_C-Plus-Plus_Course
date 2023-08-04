#include <iostream>

using namespace std;

class Car
{
public:
    virtual void start()=0;//Pure Virtual Function
};

class Innova:public Car
{
public:
    void start()
    {
        cout<<"Innova Started"<<endl;
    }
};

class Swift:public Car
{
public:
    void start()
    {
        cout<<"Swift Started"<<endl;
    }
};
int main()
{
    cout<<":::   Run Time Polymorphism using Pure Virtual Function   :::"<<endl;
    Car *c;
    c=new Innova();
    c->start();

    c=new Swift();
    c->start();
    return 0;
}
