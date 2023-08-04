#include <iostream>

using namespace std;

int main()
{
    int a,b,c,netsalary;
    cout << "Enter the Basic Salary:" << endl;
    cin>>a;
    cout << "Enter the Percentage of Allowance:" << endl;
    cin>>b;
    cout << "Enter the Percentage of Deduction:" << endl;
    cin>>c;
    netsalary=a+(a*b)/100-(a*c)/100;
    cout<< "The Net Salary is "<<netsalary<<endl;
    return 0;
}
