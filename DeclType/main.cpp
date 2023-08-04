#include <iostream>

using namespace std;

int main()
{
    cout << "Declare some variable with same data type as some other variable:" << endl;
    double x;
    decltype(x) y=13.55;
    cout<<y<<endl;
    return 0;
}
