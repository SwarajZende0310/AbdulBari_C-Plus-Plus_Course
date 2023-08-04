#include <iostream>

using namespace std;

class Shape
{
public:
    virtual double area()=0;
    virtual double perimeter()=0;
};

class Rectangle:public Shape
{
private:
    double length;
    double breadth;
public:
    Rectangle(double l=1,double b=1)
    {
        length=l;
        breadth=b;
    }
    double area()
    {
        return length*breadth;
    }
    double perimeter()
    {
        return 2*(length+breadth);
    }
};

class Circle:public Shape
{
private:
    double radius;
public:
    Circle(double r=1)
    {
        radius=r;
    }
    double area()
    {
        return 3.1425*radius*radius;
    }
    double perimeter()
    {
        return 2*3.1425*radius;
    }
};
int main()
{
    Shape *p;

    cout<<"RECTANGLE"<<endl;
    p=new Rectangle(10,5);
    cout << "Area of the Rectangle is " <<p->area()<< endl<<"Perimeter of the Rectangle is "<<p->perimeter()<<endl;

    cout<<"CIRCLE"<<endl;
    p=new Circle(4);
    cout << "Area of the Circle is " <<p->area()<< endl<<"Perimeter of the Circle is "<<p->perimeter()<<endl;

    return 0;
}
