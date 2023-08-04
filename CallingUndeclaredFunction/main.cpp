#include <iostream>

using namespace std;

void fun(int x);
int main()
{
    cout << "Calling Undeclared Function" << endl;
    fun(1);
    return 0;
}

void fun(int x)//If this part not declared compiler generates error
{
    cout<<x<<"..Cannot call undeclared function"<<endl;
}
