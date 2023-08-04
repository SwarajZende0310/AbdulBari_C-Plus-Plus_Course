#include <iostream>

using namespace std;

int main()
{
    float finalvelocity,initialvelocity,acceleration,speed;
    cout<<"Enter the Final velocity,Initial Velocity and Acceleration:"<<endl;
    cin>>finalvelocity>>initialvelocity>>acceleration;
    speed=((finalvelocity*finalvelocity)-(initialvelocity*initialvelocity))/(2*acceleration);
    cout << "Speed is " << speed<<endl;
    return 0;
}
