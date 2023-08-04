#include <iostream>

using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout << n << endl;
        fun(n-1);
    }
}

void fun1(int n)
{
    if(n>0)
    {
        fun1(n-1);
        cout << n << endl;
    }
}
int main()
{
    cout<<"Recursion after cout:"<<endl;
    fun(5);
    cout<<"Recursion before cout:"<<endl;
    fun1(5);
    return 0;
}
