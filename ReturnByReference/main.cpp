#include <iostream>

using namespace std;

int& fun(int &a)
{
    cout<<a<<endl;
    return a;
}
int main()
{
    int x=10;
    fun(x)=24;//"fun(x)" acts as a reference to x itself
    cout<<x;
    return 0;
}
