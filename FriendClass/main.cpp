#include <iostream>

using namespace std;

class your;

class my
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend your;
};

class your
{
public:
    my x;
    void fun()
    {
        x.a=8;
        x.b=8;
        x.c=0;
    }
};
int main()
{
    return 0;
}
