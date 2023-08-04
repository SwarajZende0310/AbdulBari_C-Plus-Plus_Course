#include <iostream>

using namespace std;

int sum(int x,int y)
{
    return x+y;
}
int sum(int x,int y,int z)
{
    return x+y+z;
}
float sum(float x,float y)
{
    return x+y;
}
//float sum(int x,int y);not allowed as only change in return type
int main()
{
    cout <<sum(10,20)<< endl;
    cout <<sum(10,2,3)<< endl;
    cout <<sum(7.9f,2.3f)<< endl;
    return 0;
}
