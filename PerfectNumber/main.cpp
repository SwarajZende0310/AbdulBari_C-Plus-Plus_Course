#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout << "Enter the number to check whether it is a PERFECT Number:" << endl;
    cin>>n;
    //Perfect number is a number whose sum of factors is twice is value
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==(2*n))
    {
        cout<< "It is a PERFECT Number";
    }
    else
    {
        cout<< "It is not a PERFECT Number";
    }
    return 0;
}
