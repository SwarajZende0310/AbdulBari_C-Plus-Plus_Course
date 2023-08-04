#include <iostream>

using namespace std;

class Parent
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void funParent()
    {
        a=5;
        b=10;
        c=15;
    }
};
class Child:private Parent
{
    void funChild()
    {
        //a=5;   Because cannot access private members
        b=10;
        c=15;
    }
};
class Grandchild:public Child
{
    void funGrandchild()
    {
        //a=5;   Because cannot access private members
        //b=10;  Protected becomes Private
        //c=15;  Public becomes Private
    }
};
int main()
{
    Child c;
    //c.a=20;  Because cannot access private members
    //c.b=25;  Because cannot public becomes private
    //c.c=30;  Because cannot public becomes private
    return 0;
}
