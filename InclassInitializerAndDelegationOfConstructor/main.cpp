#include <iostream>

using namespace std;

class Test
{
    int x=10;
    int y=20;
public:
    Test(int a,int b)
    {
        x=a;
        y=b;
    }
    Test():Test(1,1){}
};
int main()
{
    cout << "Inclass Initializer and Delegation of Constructor" << endl;
    return 0;
}
