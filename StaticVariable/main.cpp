#include <iostream>

using namespace std;

void fun()
{
    static int a=10;//Declared only once and available throughout execution
    a++;
    cout <<a<< endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}
