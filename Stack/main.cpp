#include <iostream>

using namespace std;

class StackUnderflow:public exception{};
class StackOverflow:public exception{};

class Stack
{
private:
    int *stk;
    int sz;
    int top=-1;
public:
    Stack(int s)
    {
        sz=s;
        stk=new int[sz];
    }
    void push(int a)
    {
        if(top==sz-1)
            throw StackOverflow();
        top++;
        stk[top]=a;
    }
    int pop()
    {
        if(top==-1)
            throw StackUnderflow();
        return stk[--top];
    }
};
int main()
{
    try
    {
     Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    }
    catch(StackOverflow e)
    {
        cout<<"Stack Overflow Error"<<endl;
    }
    catch(StackUnderflow e)
    {
        cout<<"Stack Underflow Error"<<endl;
    }
    return 0;
}
