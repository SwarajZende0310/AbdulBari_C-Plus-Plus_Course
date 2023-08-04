#include <iostream>

using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r1,r2;
    r1.length=5;
    r1.breadth=10;
    cout<<"Area of r1 Rectangle is: "<<r1.area()<< endl;
    cout<<"Perimeter of r1 Rectangle is: "<<r1.perimeter()<< endl;

    r2.length=15;
    r2.breadth=10;
    cout<<"Area of r2 Rectangle is: "<<r2.area()<< endl;
    cout<<"Perimeter of r2 Rectangle is: "<<r2.perimeter()<< endl;
    return 0;
}
