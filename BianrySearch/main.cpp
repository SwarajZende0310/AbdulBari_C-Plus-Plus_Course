#include <iostream>

using namespace std;

int main()
{
    int m,key,mid,h,l=0,i=0;
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
    h=m;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key)
        {
            cout<< "Element Found at "<<mid<< " Location.";
            return 0;
        }
        else if(a[mid]>key)
        {
            h=mid-1;
        }
        else//if:     a[mid]<key
        {
            l=mid+1;
        }
    }
    cout<< "Element not found";
    return 0;
}
