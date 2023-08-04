#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "Enter the Number of Rows: " << endl;
    cin>>row;
    cout<< "Drawing Pattern 3"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if((i+j)>=(row-1))
            {
                cout<< "*";
            }
            else
            {
                cout<< " ";
            }
        }
        cout<<endl;
    }

    //DRWAING PATTERN 3.1
     cout<< "Drawing Pattern 3.1"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if((i+j)<=(row-1))
            {
                cout<< "*";
            }
            else
            {
                cout<< " ";
            }
        }
        cout<<endl;
    }
    return 0;
}
