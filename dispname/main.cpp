#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "May i Know your name" << endl;
    getline(cin,name);//Both Possible
    //cin>>name;
     cout<<"Hello "<<name;
    return 0;
}
