#include <iostream>

using namespace std;

int main()
{
    cout << "Lambda Expression: Unnamed function" << endl;

    auto x=[](){cout<<"Hello Swaraj"<<endl;};//Defining function
    x();

    [](int x,int y){cout<<"Sum is "<<x+y<<endl;}(10,5);//Defining and calling function

    int z=[](int x,int y){return x+y;}(10,5);//Defining and calling function and storing value in variable

    int a=10,b=20;
    //[](){cout<<a<<" "<<b<<endl;};    Cannot access local variable as not in capture list
    [&a,&b](){cout<<"a="<<a<<" ,"<<"b="<<b<<endl;}();

    [&](){cout<<"Can Access all local variable by reference"<<endl;}();// Due to '&' in capture list
    return 0;
}
