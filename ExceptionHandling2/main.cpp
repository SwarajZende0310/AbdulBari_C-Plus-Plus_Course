#include <iostream>

using namespace std;

int division(int x,int y)
{
    if(y==0)
        throw 1;
    return x/y;
}
int main()
{
    try
    {
        int c=division(10,0);
        cout<<"Division of both the numbers is "<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by Zero:ERROR CODE "<<e;
    }
    return 0;
}
