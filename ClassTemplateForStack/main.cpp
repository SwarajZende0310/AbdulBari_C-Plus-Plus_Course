#include <iostream>

using namespace std;

template<class T>
class Stack
{
private:
    T *stk;
    int top;
    int sz;
public:
    Stack(int s)
    {
        sz=s;
        top=-1;
        stk=new T(sz);
    }
    void push(T x);
    T pop();
};

template<class T>
void Stack<T>::push(T x)
    {
        if(top==sz-1)
            cout<<"Stack is Full"<<endl;
        else
        {
            top++;
            stk[top]=x;
        }
    }

template<class T>
T Stack<T>::pop()
{
    int x;
    if(top==-1)
        cout<<"Stack is Empty"<<endl;
    else
    {
        x=stk[top];
        top--;
    }
    return x;
}
int main()
{
    cout << "Stack using Template" << endl;
    Stack<int> s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    return 0;
}
