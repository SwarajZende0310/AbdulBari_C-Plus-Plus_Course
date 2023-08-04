#include <iostream>

using namespace std;

int* fun(int size1)
{
    int *p=new int[size1];
    for(int i=0;i<size1;i++)
    {
        p[i]=i+2;
    }
    cout<<p<<endl;
    return p;
}
int main()
{
    int *q=fun(5);//Hence p and q have same address at which they point
    cout<<q<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
    return 0;
}
