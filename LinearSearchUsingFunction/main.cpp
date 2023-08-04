#include <iostream>

using namespace std;

int linear_search(int A[],int size1,int key)
{
    for(int i=0;i<size1;i++)
    {
        if(A[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int key,s=8;
    int arr[]={1,5,4,8,6,2,3,9};
    cout << "Enter the element ot be searched: " << endl;
    cin>>key;
    int op=linear_search(arr,s,key);
    cout<< key<<" stored at "<<op<<" th Index";
    return 0;
}
