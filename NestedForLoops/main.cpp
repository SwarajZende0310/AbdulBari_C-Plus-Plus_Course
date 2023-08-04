#include <iostream>

using namespace std;

int main()
{
    int row,column;
    cout << "Enter the number of rows of matrix: " << endl;
    cin>>row;
    cout << "Enter the number of columns of matrix: " << endl;
    cin>>column;
    cout<<"Indexes of the matrix are: "<<endl;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            cout<< "("<<i<< ","<<j<< ")";
        }
        cout<<endl;
    }
    return 0;
}
