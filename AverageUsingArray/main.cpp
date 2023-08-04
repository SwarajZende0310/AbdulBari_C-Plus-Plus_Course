#include <iostream>

using namespace std;

int main()
{
    int m,sum=0;
    cout << "Enter the number of elements:" << endl;
    cin>>m;
    int A[m];
    for(int i=0;i<m;i++)
    {
        cout<<(i+1)<<".Enter the number: ";
        cin>>A[i];
        sum+=A[i];
    }
    float average=sum/(float)m;
    cout<<"Average of the elements is "<<average;
    return 0;
}
