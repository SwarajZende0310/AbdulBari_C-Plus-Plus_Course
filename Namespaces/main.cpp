#include <iostream>

using namespace std;

namespace first
{
    void fun()
    {
        cout<<"First"<<endl;
    }
};
namespace Second
{
    void fun()
    {
        cout<<"Second"<<endl;
    }
};
using namespace first;
int main()
{
    fun();
    Second::fun();
    return 0;
}
