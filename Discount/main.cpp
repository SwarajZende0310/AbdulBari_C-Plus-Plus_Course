#include <iostream>

using namespace std;

int main()
{
    int bill,discount=0;
    cout << "Enter the Bill Amount:" << endl;
    cin>>bill;
    cout<< "Bill Amount is "<<bill<<endl;
    if(bill<100)
    {
        cout<< "NO DISCOUNT"<<endl;
        cout<< "Amount is "<<bill<<endl;
    }
    else if((bill>=100)&&(bill<500))
    {
        discount=bill/10;
        cout<< "Discount is "<<discount<<endl;
        cout<< "Discounted amount is "<<bill-discount<<endl;
    }
    else
    {
        discount=bill/5;
        cout<< "Discount is "<<discount<<endl;
        cout<< "Discounted amount is "<<bill-discount<<endl;
    }
    return 0;
}
