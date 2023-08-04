#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b,c;
    float r1,r2;
    cout <<"Enter the coefficients a,b,c of the quadratic equation:-"<< endl;
    cin>>a>>b>>c;
    r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout <<"The Roots of the quadratic equation are "<<r1<<" and "<<r2;
    return 0;
}
