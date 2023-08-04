#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout << "Addition of 2D Array:" << endl;
    /*cout<< "Enter rows in first Array:";
    cin>>r1;
    cout<< "Enter columns in first Array:";
    cin>>c1;*/
    cout<< "Enter rows in Array:";
    cin>>r;
    cout<< "Enter columns in Array:";
    cin>>c;
    int A[r][c],B[r][c];
    cout<< "";
    cout<< "Enter the Elements of First Array:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>A[i][j];
        }
    }

    cout<< "Enter the Elements of Second Array:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>B[i][j];
        }
    }

    cout<< "Addition of Both the Array:"<<endl;
    int C[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
