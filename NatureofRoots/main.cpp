#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout << "Enter the Coefficients a,b,c" << endl;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>0)
    {
        cout<< "Nature of the roots are Real and Unequal"<<endl;
    }
    else if (d<0)
    {
        cout<< "Nature of the roots are Imaginary"<<endl;
    }
    else
    {
        cout<< "Nature of the roots are Real and Equal"<<endl;
    }
    return 0;
}
