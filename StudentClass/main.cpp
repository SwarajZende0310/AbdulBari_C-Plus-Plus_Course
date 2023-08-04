#include <iostream>

using namespace std;

class Student
{
private:
   int Rollno;
   string Name;
   int marks1;
   int marks2;
   int marks3;
   int t;

public:
    Student(int r,string n,int m1,int m2,int m3)
    {
        Rollno=r;
        Name=n;
        marks1=setmarks(m1);
        marks2=setmarks(m2);
        marks3=setmarks(m3);
    }
    int setmarks(int m);
    int total()
    {
        t=marks1+marks2+marks3;
        return t;
    }
    char grade();
};

int main()
{
    int r,m1,m2,m3;
    string n;
    cout << "Enter the Roll NO: " << endl;
    cin>>r;
    cout << "Enter Name: " << endl;
    cin>>n;
    cout << "Enter the marks of three subjects: " << endl;
    cin>>m1>>m2>>m3;
    Student s(r,n,m1,m2,m3);
    cout << "Total marks= " <<s.total()<< endl;
    cout << "Grade of the Student is " <<s.grade()<< endl;
    return 0;
}
char Student::grade()
{
    if(t<120)//less than 40%
    {
        return 'C';
    }
    else if(t>=120&&t<120)//More than 40% and less than 60%
    {
        return 'B';
    }
    else//More than 60%
    {
        return 'A';
    }
}

int Student::setmarks(int m)
    {
        if(m>=0&&m<=100)
        {
            return m;
        }
        else
        {
            return 0;
        }
    }
