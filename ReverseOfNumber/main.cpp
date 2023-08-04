#include <iostream>

using namespace std;

int main()
{
    int n,rev=0;
    cout << "Enter the Number: " << endl;
    cin>>n;
    while(n!=0)
    {
        rev=rev*10+n%10;//Using (n%10) as it will give the number in units place
        n=n/10;//Dividing by 10 as it will eliminate units place digit
    }
    cout<<rev;
    return 0;
}
