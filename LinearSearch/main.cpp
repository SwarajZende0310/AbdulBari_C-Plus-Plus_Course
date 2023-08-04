#include <iostream>

using namespace std;

int main()
{
    int m,key;
    cout << "Enter the Size of the Array:" << endl;
    cin>>m;
    int a[m];
    cout << "Enter the elements of an array:" << endl;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout << "Enter the element to be searched:" << endl;
    cin>>key;
    for(int i=0;i<m;i++)
    {
        if(a[i]==key)
        {
            cout<< key<<" stored at "<<i<<"th Index";
            return 0;
        }
    }
        cout<< "Element not Found...";
    return 0;
}
