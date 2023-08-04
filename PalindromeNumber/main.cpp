#include <iostream>

using namespace std;

int main()
{
    int n,rev=0,temp;
    cout << "Enter the number:" << endl;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    cout<< "The reverse of the number is "<<rev<<endl;
    if(temp==rev)
    {
        cout<<"The Number is a Palindrome";
    }
    else
    {
        cout<<"The Number is a NOT a Palindrome";
    }
    return 0;
}
