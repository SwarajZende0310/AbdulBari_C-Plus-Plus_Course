#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    friend Complex operator+(Complex c1,Complex c2);
};

Complex operator+(Complex c1,Complex c2)
{
    Complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}
int main()
{
    Complex c1(3,5);
    Complex c2(5,8);
    Complex c3=c1+c2;
    cout << "Addition:" << endl;
    c3.display();
    return 0;
}
