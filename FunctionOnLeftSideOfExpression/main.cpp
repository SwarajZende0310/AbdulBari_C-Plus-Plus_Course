#include <iostream>

using namespace std;

/*int * fun()
{
    static int x[];
    return x;
}*/

int & fun1()
{
    static int y;
    return y;
}
int main()
{
    cout << "Function on Left Side of Expression" << endl;
    //fun()=10;
    fun1()=20;//Can only have function on left hand side of function if function returns reference
    //cout<<fun()<<endl;
    cout<<fun1()<<endl;
    return 0;
}
