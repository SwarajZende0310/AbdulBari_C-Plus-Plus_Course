#include <iostream>

using namespace std;
class Parent
{
public:
    virtual int fun() final
    {
        return 2;
    }
};
class Child final:public Parent
{
    //int fun(){return 3;}           Cannot override a function which is declared final
};
//class Grandchild:public Child{};   Cannot inherit from a class which is declared final

int main()
{
    Child x;
    cout << "Final Keyword" << endl;
    cout<<x.fun()<<endl;
    return 0;
}
