#include <iostream>

using namespace std;

template<class T>
T maxim(T x, T y)
{
    return x>y?x:y;
}
int main()
{
    cout << maxim(10,20) << endl;//Works for integer
    cout << maxim(2.1,5.7) << endl;//Works for doubles
    cout << maxim(4.5f,8.9f) << endl;//Works for floats
    return 0;
}
