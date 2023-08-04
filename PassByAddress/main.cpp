#include <iostream>

using namespace std;

void swap1(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=30,y=40;
    swap1(&x,&y);//Address of x and y passed in a and b
    cout <<x<<" "<<y<< endl;//Hence change in actual value of x and y
    return 0;
}
