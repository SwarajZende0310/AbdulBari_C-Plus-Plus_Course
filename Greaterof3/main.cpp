#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter Three numbers to be compared a,b,c" << endl;
    cin>>a>>b>>c;
    if((a>b)&&(a>c))
    {
        cout<< "a is the Greatest";
    }
    else
    {
        if(b>c)
        {
            cout<< "b is the Greatest";
        }
        else
        {
            cout<< "c is the Greatest";
        }
    }
    return 0;
}
