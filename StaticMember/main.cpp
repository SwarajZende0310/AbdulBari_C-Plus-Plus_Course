#include <iostream>

using namespace std;

class Test
{
public:
    int a;
    static int c;
    Test()
    {
        a=8;
        c++;
    }
    static int getCount()
    {
        //a++;  Cannot access non static members
        return c;
    }
};
int Test::c=0;
int main()
{
    Test t1,t2;
    cout <<t1.c<< endl;
    cout <<t2.c<< endl;
    cout <<Test::c<< endl;

    t1.c=25;
    cout <<t2.c<< endl;

    cout <<t1.getCount()<< endl;
    cout<<Test::getCount()<<endl;
    return 0;
}
