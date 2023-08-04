#include <iostream>
#include<queue>
using namespace std;

int main()
{
    cout << "    STL::PRIORITY QUEUE" << endl;
    priority_queue<int> p;
    p.push(100);
    p.push(2);
    p.push(3);
    p.push(4);
    p.push(5);
    p.pop();
    cout<<"Size of Priority Queue p: "<<p.size()<<endl;
    cout<< "Priority Queue p: ";
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}
