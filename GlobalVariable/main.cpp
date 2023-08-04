#include <iostream>

using namespace std;

int g=10;//Global Variable

void fun()
{
    int g=5;//Local Variable
    //variable "g" will be considered of nearest scope
    {
        int g=0;//Block Level Scope i.e.deleted after block ends
        g++;
        cout<<g<<endl;
    }
    cout<<g<<endl;
}
int main()
{
    int a=2;//Local Variable
    cout << g << endl;
    fun();
    cout<<g<<endl;
    return 0;
}
