#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream x;
    x.open("My.txt");
    if(!x.is_open())
    {
        cout<<"File not Opened"<<endl;
        return 1;
    }
    else
        cout<<"File Opened"<<endl;
    string name;
    int roll;
    string branch;
    getline(x,name);
    x>>roll>>branch;
    if(x.eof())
        cout<<"Reached end of the file"<<endl;
    x.close();
    cout<<name<<" "<<roll<<" "<<branch<<endl;
    return 0;
}
