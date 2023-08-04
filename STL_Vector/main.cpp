#include <iostream>
#include<vector>
using namespace std;

int main()
{
    cout <<"   STL::VECTOR  "<< endl;
    vector <int> v={1,2,3,4,5};
    vector<int> v1={2,3,4,5,6};
    vector<int> v2(5,12);
    vector<int> v3;

    if(v.empty())
    {
        cout<<"v vector is empty"<<endl;
    }
    v1.push_back(7);
    v1.push_back(8);
    v1.pop_back();
    v.at(3)=100;//Change value at particular position
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    for(int x:v1)
        cout<<x<<" ";
    cout<<endl;
    for(int x:v2)
        cout<<x<<" ";
    cout<<endl;

    cout<<"Capacity of v3 vector: "<<v3.capacity()<<endl;
    cout<<"Capacity of v2 vector: "<<v2.capacity()<<endl;
    cout<<"Size of v2 vector: "<<v2.size()<<endl;
    cout<<"First element of v vector: "<<v.front()<<endl;
    cout<<"Last element of v vector: "<<v.back()<<endl;
    v2.clear();//Clears all the elements of the vector

    vector<int>::iterator itr=v.begin();
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    vector<int>::iterator itr1=v1.begin();
    for(itr1=v1.begin();itr1!=v1.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    cout<<endl;

    vector<int>::iterator itr2=v2.begin();
    for(itr2=v2.begin();itr2!=v2.end();itr2++)
    {
        cout<<*itr2<<" ";
    }
    cout<<endl;
    return 0;
}
