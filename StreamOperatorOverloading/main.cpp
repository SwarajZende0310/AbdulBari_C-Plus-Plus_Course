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
    friend ostream& operator<<(ostream &x,Complex c);
};
ostream& operator<<(ostream &x,Complex c)
{
    x<<c.real<<"+i"<<c.img<<endl;
    return x;
}
int main()
{
    Complex c1(1,2);

    cout << c1 ;
    operator<<(cout,c1);//Same as above line
    return 0;
}
