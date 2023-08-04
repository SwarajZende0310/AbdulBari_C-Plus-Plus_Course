#include <iostream>

using namespace std;

class Exception1:public exception
{

};
class Exception2:public Exception1
{

};
int main()
{
    try
    {
        throw 'a';
    }
    catch(int e)
    {
        cout<<"Integer Exception";
    }
    catch(double e)
    {
        cout<<"Double Exception";
    }
    catch(Exception2 e)
    {
        cout<<"Child Exception";
    }
    catch(Exception1 e)
    {
        cout<<"Parent Exception";
    }
    catch(...)
    {
        cout<<"ALL Catch Exception";
    }
    return 0;
}
