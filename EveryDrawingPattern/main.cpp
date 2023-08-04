#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: "<< endl;
    cin>>row;
    cout<<"Drawing Pattern 1"<<endl;
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<row;j++)
        {
            cout<< "* ";
        }
        cout<<endl;
    }

    cout<<"Drawing Pattern 2"<<endl;
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<=i;j++)
        {
            cout<< "* ";
        }
        cout<<endl;
    }

    cout<<"Drawing Pattern 3"<<endl;
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<row-i;j++)
        {
            cout<< "* ";
        }
        cout<<endl;
    }

    cout<<"Drawing Pattern 4"<<endl;
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<row;j++)
        {
            if((i+j)>=(row-1))
            {
                cout<< "* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<"Drawing Pattern 5"<<endl;
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<row;j++)
        {
            if(i<=j)
            {
                cout<< "* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<"Drawing Pattern 6"<<endl;
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<row-i;j++)
        {
          cout<<"  ";
        }
      for(int j=0;j<2*(i+1);j++)
        {
          cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"Drawing Pattern 7"<<endl;
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<(i+1);j++)
        {
          cout<<" ";
        }
      for(int j=0;j<2*(row-i);j++)
        {
          cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}
