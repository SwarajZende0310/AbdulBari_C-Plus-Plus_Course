#include <iostream>

using namespace std;

int main()
{
    int size1;
    do
    {
        cout<<"Enter the Size of Array:"<<endl;
        cin>>size1;
    }while(size1<1 || size1 >10000);
    int arr[size1];
    cout << "Enter the Elements of array: " << endl;
    for(int i=0;i<size1;i++)
    {
        do
        {
            cout<< "Enter the "<<i<<" element:";
            cin>>arr[i];
        }while(arr[i]<0 || arr[i]>9);
    }
    cout<<"Entered Array: ";
    for(int i=0;i<size1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    for(int i=0;i<size1;i++)
    {
        if(arr[i]==0)
        {
            for(int k=1;k<(size1-i-1);k++)
            {
                arr[size1-k]=arr[size1-k-1];
            }
            arr[i+1]=0;
            i++;
        }
    }
    cout<<"Duplicate Zeros Array: ";
    for(int i=0;i<size1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
