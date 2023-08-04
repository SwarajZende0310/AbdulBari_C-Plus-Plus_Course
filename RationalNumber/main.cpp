#include <iostream>

using namespace std;

class rational
{
private:
    int p;
    int q;
public:
    rational(int num=0,int den=0)
    {
        p=num;
        q=den;
    }
    friend rational operator+(rational r1,rational r2);
    friend ostream& operator<<(ostream &x,rational r);
};
rational operator+(rational r1,rational r2)
{
    rational t;
    t.p=(r1.p*r2.q)+(r2.p*r1.q);
    t.q=r1.q*r2.q;
    return t;
}

ostream& operator<<(ostream &x,rational r)
{
    x<<r.p<<"/"<<r.q;
}

int main()
{
    rational r1(3,4),r2(2,5),r3;
    r3=r1+r2;
    cout << "Addition of Two Rational Numbers " <<r1<<" and "<<r2<<" is "<<r3<<endl ;
    return 0;
}
