#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout << "Enter two numbers to find GCD" << endl;
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
    }
    cout<<"GCD of two numbers is "<<m<<endl;
    return 0;
}
