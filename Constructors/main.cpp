#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    //NON PARAMETEREISED CONSTRUCTOR

    /*Rectangle()
    {
        length=1;
        breadth=1;
    }*/

    //PARAMETEREISED CONSTRUCTOR
    Rectangle(int l=1,int b=1)
    {
        setLength(l);
        setBreadth(b);
    }

    //COPY CONSTRUCTOR
    Rectangle(Rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;
    }
    void setLength(int l)
    {
        if(l<0)
            length=1;
        else
            length=l;
    }
    void setBreadth(int b)
    {
        if(b<0)
            breadth=1;
        else
            breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
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
    Rectangle r1;
    Rectangle r2(10,5);
    Rectangle r3(r2);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
    return 0;
}
