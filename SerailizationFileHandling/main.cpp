#include <iostream>
#include<fstream>

using namespace std;

class Student
{
private:
    string name;
    int roll;
    string branch;
public:
    Student(){};
    Student(string n,int r,string b)
    {
        name=n;
        roll=r;
        branch=b;
    }
    friend ofstream& operator<<(ofstream &ofs,Student s);
    friend ifstream & operator >>(ifstream &ifs,Student &s);
    friend ostream & operator <<(ostream &os,Student &s);
};
ofstream& operator<<(ofstream &ofs,Student s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

ifstream & operator >>(ifstream &ifs,Student &s)
{
    ifs>>s.name;
    ifs>>s.roll;
    ifs>>s.branch;
    return ifs;
}

ostream & operator <<(ostream &os,Student &s)
{
    os<<"Name: "<<s.name<<endl;
    os<<"Roll No: "<<s.roll<<endl;
    os<<"Branch: "<<s.branch<<endl;
    return os;
}
int main()
{
    cout << "File Handling Serialization" << endl;
    Student s1("Swaraj",213057,"EnTC");
    ofstream x("Text.txt");
    x<<s1;
    x.close();

    Student s2;
    ifstream y("Text.txt");
    y>>s2;
    y.close();
    cout<<s2;
    return 0;
}
