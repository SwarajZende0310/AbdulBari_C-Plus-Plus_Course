#include <iostream>

using namespace std;

int main()
{
    int row,column,c=1;
    cout << "Enter the number of rows: " << endl;
    cin>>row;
    cout<< "Enter the number of columns: "<<endl;
    cin>>column;
    cout<< "***** DRAWING PATTERN 1 *****"<<endl;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}
