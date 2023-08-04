#include <iostream>

using namespace std;

void display()
{
    cout<<"Hello,World";
}
int main()
{
    void (*x)();//Declaration
    x=display;//Initialisation
    (x)();//Calling the function using pointer
    return 0;
}
