#include <iostream>

using namespace std;

#define PI 3.1425

#ifndef PI
 #definePI 3
#endif // PI

#define max1(x,y) (x>y?x:y)

#define msg(x) #x
int main()
{
    cout <<PI<< endl;
    cout <<max1(10,20)<< endl;
    cout <<msg(Hello world)<< endl;
    return 0;
}
