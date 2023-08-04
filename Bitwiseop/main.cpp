#include <iostream>

using namespace std;

int main()
{
    int x=10,y=5,a,b,c,d,e,f;
    a=x&y;//And
    cout << a << endl;
    b=x|y;//Or
    cout << b << endl;
    c=~x;//Negation
    cout << c << endl;
    d=x^y;//XOR
    cout << d << endl;
    e=x<<2;//Left Shift
    cout << e << endl;
    f=x>>1;//Right Shift
    cout << f << endl;
    return 0;
}
