#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number to find factors of:" << endl;
    cin>>n;
    cout<<"Factors of "<<n<<"are :";
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
