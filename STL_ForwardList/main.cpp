#include <iostream>
#include<forward_list>
using namespace std;

int main()
{
    cout <<"   STL::LIST  "<< endl;
    forward_list <int> v={1,7,2,6,3};
    forward_list<int> v1={2,3,4,5,6};
    forward_list<int> v2(5,12);
    forward_list<int> v3;

    if(v.empty())
    {
        cout<<"v forward list is empty"<<endl;
    }
    v.push_front(100);
    v.emplace_front(101);//Same as push_front
    v.pop_front();
    v.insert_after(v.begin(),{99,98,97});
    //v1.push_back(7);  //Cannot add or delete any element at the end of forward list
    //v1.push_back(8);
    //v1.pop_back();
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    for(int x:v1)
        cout<<x<<" ";
    cout<<endl;
    for(int x:v2)
        cout<<x<<" ";
    cout<<endl;

    cout<<"First element of v forward list: "<<v.front()<<endl;
    //cout<<"Last element of v forward list: "<<v.back()<<endl;  //Cannot access last element directly
    v2.clear();//Clears all the elements of the forward list

    forward_list<int>::iterator itr=v.begin();
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    forward_list<int>::iterator itr1=v1.begin();
    for(itr1=v1.begin();itr1!=v1.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    cout<<endl;

    forward_list<int>::iterator itr2=v2.begin();
    for(itr2=v2.begin();itr2!=v2.end();itr2++)
    {
        cout<<*itr2<<" ";
    }
    cout<<endl;

    cout<<"Reversing elements of an Forward List: ";
    v1.reverse();
    for(int x:v1)
        cout<<x<<" ";
    cout<<endl;

    cout<<"Sorting the elements of Forward List: ";
    v.sort();
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
