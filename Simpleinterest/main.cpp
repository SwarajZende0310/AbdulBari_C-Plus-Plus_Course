#include <iostream>

using namespace std;

int main()
{
    int p,t,r,i;
    cout << "Enter the Principal amount,Time Period and Rate of Interest:" << endl;
    cin>>p>>t>>r;
    i=(p*t*r)/100;
    cout<<"The Simple Interest on the Given amount is "<<i<<endl;
    return 0;
}
