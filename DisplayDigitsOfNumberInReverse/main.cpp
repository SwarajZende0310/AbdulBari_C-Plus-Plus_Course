#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the Number: " << endl;
    cin>>n;
    while(n!=0)
    {
        cout<<n%10;//Using (n%10) as it will give the number in units place
        n=n/10;//Dividing by 10 as it will eliminate units place digit
    }
    return 0;
}
/*
eg. int n=1724
    1724%10=4
    1724/10=172.4 but as it is integer it will become 172
    172%10=2
    172/10=17
    and so on
    */
