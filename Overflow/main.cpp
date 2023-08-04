#include <iostream>

using namespace std;

int main()
{
    char x=127;//Max ASCII value for character
    x++;//Making it overflow goes to lowest number from highest
    cout <<(int)x  << endl;
    char y=-128;//Min ASCII value for character
    y--;//Making it overflow goes to highest number from lowest
    cout <<(int)y  << endl;
    int a=2147483647;//Max value for Integer
    a++;//Making it overflow goes to lowest number from highest
    cout <<(int)a  << endl;
    int b=-2147483648;//Max value for Integer
    b--;//Making it overflow goes to lowest number from highest
    cout <<(int)b  << endl;
    return 0;
}
