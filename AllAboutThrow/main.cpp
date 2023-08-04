#include <iostream>

using namespace std;

class MyException:public exception
{

};
int division(int x,int y)throw(MyException)
{
    if(y==0)
        throw MyException();
    return x/y;
}
int main()
{
    try
    {
        int c=division(10,0);
        cout<<"Division of both the numbers is "<<c<<endl;
    }
    catch(MyException e)
    {
        cout<<"Division by Zero:ERROR CODE "<<endl;
    }
    return 0;
}
