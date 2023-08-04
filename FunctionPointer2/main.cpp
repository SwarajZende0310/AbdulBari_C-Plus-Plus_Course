#include <iostream>

using namespace std;

int maxi(int x,int y)
{
    return x>y?x:y;
}
int mini(int x,int y)
{
    return x<y?x:y;
}
int main()
{
    int x,y;

    int (*fp)(int x,int y);

    fp=maxi;
    x=(fp)(10,5);
    cout<<x<<endl;

    fp=mini;
    y=(fp)(10,5);
    cout<<y<<endl;


    return 0;
}
