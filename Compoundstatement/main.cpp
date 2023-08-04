#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your Age:" << endl;
    cin>>age;
    if((age>=12) && (age <= 35))
    {
        cout<<"You are Young"<<endl;
    }
    else
    {
        cout<< "You are Old"<<endl;
    }
    if((age<12)||(age>35))
    {
        cout<< "You are Eligible for the offer";
    }
    else
    {
        cout<< "You are NOT Eligible for the offer";
    }
    return 0;
}
