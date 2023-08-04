#include <iostream>

using namespace std;

void display()
{
    cout << "Hello world!" << endl;
}

int maxim(int x,int y,int z)
{
    if(x>y&&x>z)
     return x;
    else if (y>z)
        return y;
    else
    return z;
}
float addfloat(float x,float y)
{
    return x+y;
}
int main()
{
    display();
    int a=maxim(100,51,15);
    cout<<"Maximum is "<<a<<endl;
    float b=addfloat(7.9,2.3);
    cout<<"Sum is "<<b<<endl;
    return 0;
}
