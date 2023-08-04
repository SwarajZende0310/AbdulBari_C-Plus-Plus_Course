#include <iostream>

using namespace std;

int main()
{
    int x=10;
    int &y=x;

    cout <<&x<< endl;
    cout <<&y<< endl;//Reference does not occupy any memory

    cout<<x<<endl;
    x++;
    y++;
    cout<<x<<endl;
    return 0;
}
