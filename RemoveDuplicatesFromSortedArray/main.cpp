#include <iostream>

using namespace std;

int removeDuplicates(int a[],int b[])
{   int c=0;
    int len = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++)
    {
        if(a[i]!=a[i+1])
        {
            b[c]=a[i];
            c++;
        }
    }
    return 0;
}

int main()
{
    //cout <<  << endl;
    int nums[]={0,0,1,1,1,2,2,3,3,4};
    int len = sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<len;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int expectednums[len];
    int c=removeDuplicates(nums[],expectednums[]);
    for(int i=0;i<len;i++)
    {
        cout<<expectednums[i]<<" ";
    }
    cout<<endl;
    return 0;
}

