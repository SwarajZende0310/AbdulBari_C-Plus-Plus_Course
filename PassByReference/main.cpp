#include <iostream>

using namespace std;

void swap1(int &a,int &b)
{
    cout<<&a<<" "<<&b<<endl;
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=30,y=40;
    swap1(x,y);
    cout<<&x<<" "<<&y<<endl;
    //As address are same it is not creating new variable just pasting it into main function
    cout <<x<<" "<<y<< endl;
    return 0;
}
