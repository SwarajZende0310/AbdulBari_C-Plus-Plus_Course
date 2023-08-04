#include <iostream>
#include<set>
using namespace std;

int main()
{
    cout << "   STL::SET  " << endl;
    set<int> s1={1,2,3,4,5,6};
    s1.insert(7);
    s1.insert(8);
    s1.insert(8);
    cout<<"Set s1:";
    for(int x:s1)
        cout<<x<<" ";
    cout<<endl;

    cout<<"Set s1 after erasing element'8'"<<endl;
    s1.erase(8);
    cout<<"Set s1:";
    for(int x:s1)
        cout<<x<<" ";
    cout<<endl;
    cout<<"Beginning of set s1: "<<*s1.begin()<<endl;
    cout<<"End of Set s1: "<<*s1.end()<<endl;

    cout<<"Copying one set to another: "<<endl;
    set<int> s2=s1;
    cout<<"Set s2:";
    for(int x:s2)
        cout<<x<<" ";
    cout<<endl;

    //Storing values in descending order
    set<int,greater<int>> s3={4,5,6,7,8,9};
    cout<<"Set s3:";
    for(int x:s3)
        cout<<x<<" ";
    cout<<endl;

    cout<<"Swapping two sets:"<<endl;
    set<int> s4={100,101,102,104};
    s1.swap(s4);
    cout<<"Set s1:";
    for(int x:s1)
        cout<<x<<" ";
    cout<<endl;

    cout<<"Set s4:";
    for(int x:s4)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
