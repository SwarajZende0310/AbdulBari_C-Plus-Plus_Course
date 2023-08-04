#include <iostream>

using namespace std;

class Test
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void fun2();
};
void fun1()
{
    Test t;
    //t.a=5;   Cannot Access private members upon an object
    //t.b=10;  Cannot Access protected member upon an object
    t.c=15;
}

void fun2()
{
    Test t;
    t.a=5;
    t.b=10;
    t.c=15;
}
int main()
{
    return 0;
}
