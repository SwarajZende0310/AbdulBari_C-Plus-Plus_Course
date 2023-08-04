#include <iostream>

using namespace std;
int x=50;
int main()
{
    int x=1000;
    cout << ::x << endl;//To access global variables with same name as local variable
    cout<<x<<endl;
    return 0;
}
