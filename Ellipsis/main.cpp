#include <iostream>

using namespace std;

int sum(int n,...)
{
    va_list x;
    va_start(x,n);
    for(int i=,s=0;i<n;i++)
    {
        s+=va_arg(x,int);
    }
    va_end(x);
    return s;
}
int main()
{
    cout << "ELLIPSIS" << endl;
    int x=sum(10,1,2,3,4,5,6,7,8,9,10);
    cout<<x<<endl;
    int y=sum(3,10,20,30);
    cout<<y<<endl;
    return 0;
}
