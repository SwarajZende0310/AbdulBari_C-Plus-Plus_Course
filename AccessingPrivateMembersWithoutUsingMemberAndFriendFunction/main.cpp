#include <iostream>

using namespace std;

class test
{
private:
    int data;
    int data2;
public:
    test(){data=100;data2=100;}
    int getData(){return data;}
    int getData2(){return data2;}
};
int main()
{
    cout << "Accessing private members of a function \nwithout using member and friend functions" << endl;
    test t;
    int *ptr=(int*)&t;
    *ptr=1;
    ptr++;
    *ptr=50;
    cout<<t.getData()<<endl;
    cout<<t.getData2()<<endl;
    return 0;
}
