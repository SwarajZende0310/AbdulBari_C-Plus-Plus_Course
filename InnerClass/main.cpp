#include <iostream>

using namespace std;

class Outer
{
public:
    int a=10;
    static int b;
    void fun()
    {
        i.display();
    }
    class Inner
    {
    public:
        void display()
        {
            cout<<"Display from Inner"<<endl;
        }
    };
    Inner i;
};
int main()
{
    Outer::Inner x;
    x.display();
    return 0;
}
