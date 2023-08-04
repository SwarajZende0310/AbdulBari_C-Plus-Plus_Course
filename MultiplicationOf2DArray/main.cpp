#include <iostream>

using namespace std;

int main()
{
    int r1,c1,r2,c2;
    cout << "Multiplication of 2D Array:" << endl;
    cout<< "Enter rows in first Array:";
    cin>>r1;
    cout<< "Enter columns in first Array:";
    cin>>c1;
    cout<< "Enter Rows in Second Array:";
    cin>>r2;
    cout<< "Enter columns in Second Array:";
    cin>>c2;
    if(c1!=r2)
    {
        cout<< "***ERROR:: Matrix Multiplication cannot be done***"<<endl;
        cout<<"As Columns in first matrix not equal to rows in Second Matrix."<<endl;
        return 0;
    }
    else
    {
      int A[r1][c1],B[c1][c2];

    cout<< "Enter the Elements of First Array:"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>A[i][j];
        }
    }

    cout<< "Enter the Elements of Second Array:"<<endl;
    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>B[i][j];
        }
    }
     cout<< "Multiplication of Both the Array:"<<endl;
     int C[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            C[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    }

    return 0;
}
