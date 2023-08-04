#include <iostream>

using namespace std;

int main()
{
    int x=10;
    int *p;//Declaring Pointer
    p=&x;//Initializing Pointer
    cout <<x<< endl;
    cout <<&x<< endl;//Address of x
    cout <<p<< endl;
    cout <<&p<< endl;
    cout <<*p<< endl;//Dereferencing pointer
    return 0;
}
