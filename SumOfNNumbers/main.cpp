#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout << "Enter the the last number till which we want to find sum:" << endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<< "Sum of "<<n<< " Natural numbers is "<<sum<<endl;
    return 0;
}
