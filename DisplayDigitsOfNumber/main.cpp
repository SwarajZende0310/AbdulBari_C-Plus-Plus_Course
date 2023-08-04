#include <iostream>
//To display the digits of a number reverse the number then print each digit
using namespace std;

int main()
{
    int n,rev=0;
    cout << "Enter the Number: " << endl;
    cin>>n;
    //First Reversing the number
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    //Then printing its digits
    while(rev!=0)
    {
        cout<<rev%10<<" ";//Using (n%10) as it will give the number in units place
        rev=rev/10;//Dividing by 10 as it will eliminate units place digit
    }
    return 0;
}
