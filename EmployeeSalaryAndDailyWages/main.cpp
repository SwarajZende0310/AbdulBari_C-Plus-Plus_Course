#include <iostream>

using namespace std;

class Employee
{
private:
    int id;
    string name;
public:
    Employee(string n,int i)
    {
        name=n;
        id=i;
    }
    string getName()
    {
        return name;
    }
    int getID()
    {
        return id;
    }
};
class Salaried:public Employee
{
private:
    int salary;
public:
    Salaried(string n,int i,int s):Employee(n,i)
    {
        salary=s;
    }
    int getSalary()
    {
        return salary;
    }
};

class PartTime:public Employee
{
private:
    int wage;
public:
    PartTime(string n,int i,int w):Employee(n,i)
    {
        wage=w;
    }
    int getWage()
    {
        return wage;
    }
};
int main()
{
    Salaried x("Swaraj",51,100000);
    PartTime y("Aakash",52,100000);
    cout << "Salary of " <<x.getName()<<" is "<<x.getSalary()<< endl;
    cout << "Daily Wage of "<<y.getName()<<" is "<<y.getWage()<<endl;
    return 0;
}
