#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter two numbers for division a and b" << endl;
    cin>>a>>b;
    if(b!=0){
        int c=a/b;
        cout<<"Result of Divsion of both numbers is "<<c;
    }
    else{
        cout<<"Division Invalid as Division by Zero"<<endl;
    }

    return 0;
}
