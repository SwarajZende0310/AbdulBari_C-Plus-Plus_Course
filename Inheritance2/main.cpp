#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    //Rectangle();
    Rectangle(int l=1,int b=1);
    Rectangle(Rectangle &rect);
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid(int l=1,int b=1,int h=1)
    {
        height=h;
        setLength(l);
        setBreadth(b);
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height=h;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};
int main()
{
    Cuboid c(5,10,7);
    cout << "Volume of CUBOID is " <<c.volume()<< endl;
    return 0;
}


/*Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}*/
Rectangle::Rectangle(int l,int b)
    {
        setLength(l);
        setBreadth(b);
    }
Rectangle::Rectangle(Rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;
    }
int Rectangle::getLength()
    {
        return length;
    }
int Rectangle::getBreadth()
    {
        return breadth;
    }
void Rectangle::setLength(int l)
    {
        if(l<0)
            length=1;
        else
            length=l;
    }
void Rectangle::setBreadth(int b)
    {
        if(b<0)
            breadth=1;
        else
            breadth=b;
    }
int Rectangle::area()
    {
        return length*breadth;
    }
int Rectangle::perimeter()
    {
        return 2*(length+breadth);
    }
bool Rectangle::isSquare()
    {
        if(length==breadth)
            cout<<"It is a Square\n";
    }
    Rectangle::~Rectangle()
    {
        //cout<<"Rectangle Destroyed\n";
    }
