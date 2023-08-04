#include <iostream>

using namespace std;

int main()
{
    int *p= new int[5];
    p[0]=12;
    p[1]=15;
    cout << p[0] << endl;
    cout << p[1] << endl;

    delete []p;
    //Advantage of Storing Data in Heap Memory its size can be changed after some time in code which is not possible in case of stack memory
    cout<< "Resized Array in Heap:"<<endl;
    p=new int [20];
    p[15]=12;
    p[16]=15;
    cout << p[15] << endl;
    cout << p[16] << endl;

    delete[]p;
    p=nullptr;

    return 0;
}
