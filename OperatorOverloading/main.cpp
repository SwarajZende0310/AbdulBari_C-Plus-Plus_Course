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
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }

    Complex operator-(Complex x)
    {
        Complex temp;
        temp.real=real-x.real;
        temp.img=img-x.img;
        return temp;
    }
    void display()
    {
        cout<<real<<“+i”<<img<<endl;
    }

};
int main()
{
    Complex c1(3,5);
    Complex c2(10,6);
    Complex c3=c1+c2;
    Complex c4=c2-c1;
    cout<<"Addition";
    c3.display();
    cout<<"Subtraction";
    c4.display();
    return 0;
}
