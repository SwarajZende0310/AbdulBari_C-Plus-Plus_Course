#include <iostream>

using namespace std;


int main()
{
    int nums[]={0,0,1,1,1,2,2,3,3,4};
    int c=0;
    int len = sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<len;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int expectednums[len];
    for(int i=0;i<len;i++)
    {
        if(nums[i]!=nums[i+1])
        {
            expectednums[c]=nums[i];
            c++;
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<expectednums[i]<<" ";
    }
    cout<<endl;
    return 0;
}

