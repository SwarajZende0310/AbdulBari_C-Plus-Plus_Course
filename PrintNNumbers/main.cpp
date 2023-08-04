#include <iostream>

using namespace std;

int main()
{
    int n,i=1;
    cout << "Enter the numbers to be printed" << endl;
    cin>>n;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
    /*USING FOR LOOP
    for(int i=1,i<=n,i++)
    {
        cout<<i<<endl;
    }
    */
    /*USING DO WHILE LOOP
    do
    {
        cout<<i<<endl;
        i++;
    }while(i<=n);
    */
    return 0;
}
