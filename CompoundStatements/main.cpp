#include <iostream>

using namespace std;

int main()
{
    int a=10,b=5;
    a+=b;
    cout << "a=" << a << endl;//10+5=15
    a-=b;
    cout << "a=" <<a << endl;//15-5=10
    a*=b;
    cout <<"a=" << a << endl;//10*5=50
    a/=b;
    cout << "a=" <<a << endl;//50/5=10
    a%=b;
    cout << "a=" <<a << endl;//10%5=0
    return 0;
}
