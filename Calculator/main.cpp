#include <iostream>

using namespace std;

int main()
{
    int a,b,c,choice;
    cout << "***   Menu   ***" << endl;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Division" << endl;
    cout << "\n Enter your Choice" << endl;
    cin>>choice;
    cout << "Enter the Two numbers:" << endl;
    cin>>a>>b;
    switch(choice)
    {
    case 1:c=a+b;
    cout << "Result of the operation is " <<c<< endl;
       break;
    case 2:c=a-b;
    cout << "Result of the operation is " <<c<< endl;
       break;
    case 3:c=a*b;
    cout << "Result of the operation is " <<c<< endl;
       break;
    case 4:c=a/b;
    cout << "Result of the operation is " <<c<< endl;
       break;
    default:
        cout<< "Invalid Input"<<endl;
    }
    return 0;
}
