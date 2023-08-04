#include <iostream>

using namespace std;

int main()
{
    int a,d,n,term;
    cout << "Enter the first term,the Difference and the number term of Arithmetic Progression:" << endl;
    cin>>a>>d>>n;
    term=a+(n-1)*d;
    cout<<"The "<<n<<"th term of the AP is "<<term<<endl;
    return 0;
}
