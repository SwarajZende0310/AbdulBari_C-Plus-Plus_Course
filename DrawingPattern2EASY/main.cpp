#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows:" << endl;
    cin>>row;
    cout<< "Drawing Pattern 2"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i>=j)
            {
                cout<<"*";
            }

        }
        cout<<endl;
    }
    cout<< "Drawing Pattern 2.1"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i>j)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }

        }
        cout<<endl;
    }
    return 0;
}
