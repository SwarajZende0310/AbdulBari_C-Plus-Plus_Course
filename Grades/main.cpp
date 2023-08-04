#include <iostream>

using namespace std;

typedef int marks;
int main()
{
    marks m1,m2,m3;
    cout << "Enter the marks of 3 subjects:" << endl;
    cin>>m1>>m2>>m3;
    float avg=(m1+m2+m3)/3.0;
    if(avg>=60)
    {
        cout<< "A Grade"<<endl;
    }
    else if((avg>=35)&&(avg<60))
    {
        cout<< "B Grade"<<endl;
    }
    else
    {
        cout<< "C Grade"<<endl;
    }
    return 0;
}
