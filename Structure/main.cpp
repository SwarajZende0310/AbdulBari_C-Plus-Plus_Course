#include <iostream>

using namespace std;

struct Demo
{
   int x;
   int y;
   void Display();
};
int main()
{
    Demo d;
    d.x=10;
    d.y=20;
    d.Display();
    return 0;
}
void Demo::Display()
   {
       cout<<x<<" "<<y<<endl;
   }
