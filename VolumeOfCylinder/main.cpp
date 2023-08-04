#include <iostream>

using namespace std;

int main()
{
    float r,h,volume;
    cout << "Enter the Radius and Height of the Cylinder" << endl;
    cin>>r>>h;
    volume=(float)22/7*r*r*h;
    cout<< "The Volume of the Cylinder is "<<volume;
    return 0;
}
