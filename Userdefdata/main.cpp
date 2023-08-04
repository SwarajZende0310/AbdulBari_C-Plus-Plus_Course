#include <iostream>

using namespace std;

enum days {mon,tue,wed=13,thur,fri,sat=1,sun};
int main()
{
    days saz=wed;
    cout << saz << endl;
    return 0;
}
