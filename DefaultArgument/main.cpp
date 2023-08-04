#include <iostream>

using namespace std;

int add(int x,int y,int z=0)
{
    return x+y+z;
}

int maxim(int x=0,int y=0,int z=0)
{
    return x>y && x>z?x:(y>z)?y:z;
}
int main()
{
    cout <<"ADDITION"<< endl;
    cout <<add(10,5)<< endl;
    cout <<add(10,5,14)<< endl;

    cout <<"MAXIMUM"<< endl;
    cout <<maxim(10,21,45)<< endl;
    cout <<maxim(10,21)<< endl;
    cout <<maxim(10)<< endl;
    cout <<maxim()<< endl;
    return 0;
}
