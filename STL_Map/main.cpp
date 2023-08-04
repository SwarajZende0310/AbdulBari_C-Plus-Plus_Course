#include <iostream>
#include<map>
using namespace std;

int main()
{
    cout << "STL::MAP" << endl;
    map<int,string> m;
    m.insert(pair<int,string>(1,"Sanskruti"));
    m.insert(pair<int,string>(2,"Swaraj"));
    m.insert(pair<int,string>(3,"Daya"));
    m.insert(pair<int,string>(4,"Anil"));
    m.insert(pair<int,string>(5,"Eknath"));

    cout<<"Map m: "<<endl;
    map <int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<"Searching for a key:"<<endl;
    map<int,string>::iterator itr1;
    itr1=m.find(3);//Return the iterator value of the particular key location
    cout<<itr1->first<<" "<<itr1->second<<endl;

    cout<<"Map m after deletion of key 1: "<<endl;
    m.erase(1);
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<"Map m after deletion of key 2 to 4: "<<endl;
    m.erase(m.find(2),m.find(4));
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}
