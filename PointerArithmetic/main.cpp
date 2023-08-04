#include <iostream>

using namespace std;

int main()
{
    int a[5]={2,6,4,8,10};
    int *p=a,*q=&a[4];
    cout <<*p<< endl;
    p++;//Jumping fwd 1 element
    cout <<*p<< endl;
    p--;//Jumping back 1 element
    cout <<*p<< endl;
    cout <<p<< endl;
    p+=2;//Jumping fwd 2 elements
    cout <<*p<< endl;
    cout <<p<< endl;
    p-=2;//Jumping back 2 elements
    cout <<*p<< endl;
    cout <<p<< endl;

    cout<<"Printing All the elements of the Array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
        cout<<i[a]<<" ";
        cout<<p[i]<<" ";
        cout<<i[p]<<" ";
        cout<<*(a+i)<<" ";
        cout<<*(p+i)<<" ";
        cout<<endl;
    }

    //Elements between two pointers
    cout<< "Elements between two pointers(q-p): "<<q-p<<endl;
    cout<< "Elements between two pointers(p-q): "<<p-q<<endl;
    return 0;
}
