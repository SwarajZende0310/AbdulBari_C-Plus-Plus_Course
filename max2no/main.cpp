#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter the two numbers to compared a and b:" << endl;
    cin>>a>>b;
    if(a>b){
        cout<<"a is greater than b";
    }
    else if(a==b){
        cout<<"a is equal to b";
    }
    else{
        cout<<"a is less than b";
    }
    return 0;
}
