#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cout << "Enter to check whether it is a Prime Number:" << endl;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        cout<< "It is a Prime Number";
    }
    else  if(c>1)
    {
        cout<< "It is a Composite Number or Non Prime Number";
    }
    else
    {
        cout<< "It is not a Prime Number nor a Composite Number";
    }
    return 0;
}
