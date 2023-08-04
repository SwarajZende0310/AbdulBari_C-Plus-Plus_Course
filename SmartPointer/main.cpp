#include <iostream>
#include<memory>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l=1,int b=1)
    {
        length=l;
        breadth=b;
    }
    int area(){return length*breadth;}
    int perimeter(){return 2*(length+breadth);}
};

int fun(int a,int b)
{
    unique_ptr<Rectangle> p1(new Rectangle(a,b));
    cout<<"Area of Rectangle:"<<p1->area()<<endl;
    cout<<"Perimeter of Rectangle:"<<p1->perimeter()<<endl;
    unique_ptr<Rectangle> p2;
    p2=move(p1);
    cout<<"Area of Rectangle:"<<p2->area()<<endl;
    cout<<"Perimeter of Rectangle:"<<p2->perimeter()<<endl;
    return 0;
}
int main()
{
    cout << "Smart Pointers" << endl;
    fun(10,5);
    return 0;
}
