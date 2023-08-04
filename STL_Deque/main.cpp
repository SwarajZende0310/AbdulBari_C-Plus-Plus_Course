#include <iostream>
#include<deque>
using namespace std;

int main()
{
    cout <<"    STL::DEQUE  "<< endl;
    deque<int> d={1,2,3,4,5};
    deque<int> d1={2,3,4,9,6,8,1};
    deque<int> d2={100,99,98,97,96,95};


    d.push_back(6);
    d.push_back(7);
    d.pop_back();
    d1.push_front(1);
    d1.push_front(0);
    d1.pop_front();
    for(int x:d)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:d1)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    for(int x:d2)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"First element of deque d: "<<d.front()<<endl;
    cout<<"Last Element of deque d: "<<d.back()<<endl;
    if(d1.empty())
    {
        cout<<"Deque d1 is empty."<<endl;
    }
    cout<<"Size of deque d2: "<<d2.size()<<endl;

    cout<<"Access value at index 2 of deque d1:"<<d1.at(2)<<endl;
    return 0;
}
