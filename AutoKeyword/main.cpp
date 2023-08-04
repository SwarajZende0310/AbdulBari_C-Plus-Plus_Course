#include <iostream>

using namespace std;

float fun()
{
    return 2.45f;
}
int main()
{
    cout << "Auto Keyword" << endl;
    auto x=25*13.5+'a';
    cout<<x<<endl;
    auto y=fun();//need not know the return type of a function
    cout<<y<<endl;
    return 0;
}
