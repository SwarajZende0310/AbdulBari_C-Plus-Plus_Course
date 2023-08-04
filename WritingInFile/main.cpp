#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream x("First.txt",ios::trunc);//Creating an object x of output file stream
    x<<"Swaraj Anil Zende"<<endl;
    x<<213057<<endl;
    x<<"Electronics Engineer"<<endl;
    x.close();
    return 0;
}
