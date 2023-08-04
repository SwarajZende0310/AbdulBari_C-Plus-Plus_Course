#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows:" << endl;
    cin>>row;
    cout<< "Drawing Pattern 2"<<endl;
    for(int i=1;i<=row;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //DRAWING PATTERN 2.1
    cout<< "Drawing Pattern 2.1"<<endl;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=row+1;i<k;k--)
        {
            cout<< "*";
        }
        cout<<endl;
    }
    return 0;
}
