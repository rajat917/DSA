// Stack in DSA

#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<<"Stack Overflow."<<endl;
        }
    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout<<"Stack Underflow."<<endl;
        }
    }

    int peek()          //To show top element in the stack
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack Empty."<<endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        return true;
        else
        {
            return false;
        }
    }
};



int main()
{
    // STACK USING STL (Standard Template Library)

    /* stack <int> s;              // Creating stack

    s.push(2);                 // Pushing first element in the stack
    s.push(7);
    s.push(100);

    cout<<s.top()<<endl;        //To show top element of stack

    s.pop();                    // To pop out last/top element of stack.
    cout<<s.top()<<endl;

    cout<<s.size()<<endl;       //to show size of the stack.


    if(s.empty())              // To check if stack is empty or not.
    {
        cout<<"Stack is empty."<<endl;
    }
    else
    {
        cout<<"Stack is Not empty."<<endl;
    }*/


    Stack S(5);        //Creating stack with size 5.

    S.push(23);
    S.push(34);
    S.push(90);
    S.push(69);

    cout<<S.peek()<<endl;

    S.pop();
    cout<<S.peek()<<endl;

    S.pop();
    cout<<S.peek()<<endl;
}