#include <iostream>
#include<list>
using namespace std;

int main()
{
    cout <<"   STL::LIST  "<< endl;
    list <int> v={1,7,2,6,3};
    list<int> v1={2,3,4,5,6};
    list<int> v2(5,12);
    list<int> v3;

    if(v.empty())
    {
        cout<<"v list is empty"<<endl;
    }
    v.push_front(100);
    v.push_front(101);
    v.pop_front();
    v1.push_back(7);
    v1.push_back(8);
    v1.pop_back();
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    for(int x:v1)
        cout<<x<<" ";
    cout<<endl;
    for(int x:v2)
        cout<<x<<" ";
    cout<<endl;

    cout<<"Size of v2 list: "<<v2.size()<<endl;
    cout<<"First element of v list: "<<v.front()<<endl;
    cout<<"Last element of v list: "<<v.back()<<endl;
    v2.clear();//Clears all the elements of the list

    list<int>::iterator itr=v.begin();
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    list<int>::iterator itr1=v1.begin();
    for(itr1=v1.begin();itr1!=v1.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    cout<<endl;

    list<int>::iterator itr2=v2.begin();
    for(itr2=v2.begin();itr2!=v2.end();itr2++)
    {
        cout<<*itr2<<" ";
    }
    cout<<endl;

    cout<<"Reversing elements of an List: ";
    v1.reverse();
    for(int x:v1)
        cout<<x<<" ";
    cout<<endl;

    cout<<"Sorting the elements of List: ";
    v.sort();
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
