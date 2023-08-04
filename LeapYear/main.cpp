#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter the year to be checked:" << endl;
    cin>>year;
    if(year%100==0)
    {
        if(year%400==0)
        {
            cout<< "It is a Leap year"<<endl;
        }
        else
        {
            cout<< "It is a NOT a Leap year"<<endl;
        }
    }
    else
    {
        if(year%4==0)
        {
            cout<< "It is a Leap year"<<endl;
        }
        else
        {
            cout<< "It is a NOT a Leap year"<<endl;
        }
    }
    return 0;
}
