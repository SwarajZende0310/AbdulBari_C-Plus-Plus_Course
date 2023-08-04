#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,r,temp;
    cout << "Enter the Number:" << endl;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum+=r*r*r;
        //cout<< sum<<endl;
        n=n/10;
    }
    if(sum==temp)
    {
        cout<< "It is an Armstrong Number";
    }
    else
    {
        cout<< "It is not an Armstrong Number";
    }
    return 0;
}
