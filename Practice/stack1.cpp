//Stack using Array

#include <iostream>
using namespace std;


class Stack
{
    public:
    int size;
    int *arr;
    int top;

    Stack()
    {
        this -> size = size;
        int *arr = new int[size];
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
        cout<<"Stack is full."<<endl;
    }

    void pop()
    {
        if(top >= 0)
        top--;
        else
        cout<<"Stack is empty."<<endl;
    }

    int peek()
    {
        if(top >= 0)
        cout<<arr[top]<<endl;
        else
        cout<<"Stack is empty."<<endl;
    }

    bool isEmpty()
    {
        if(top == -1)
        return true;
        else
        return false;
    }

    void printStack(Stack s)
    {
        if (top >= 0)
        {
            while(!s.isEmpty())
            {
                cout<<arr[top]<<" ";
                s.pop();
            }
        }
        else
        cout<<"Stack is empty."<<endl;
    }
};

int main()
{
    Stack k;

    k.push(89);
    k.push(67);
    k.push(780);

    k.peek();

    k.pop();

    k.printStack(k);

    return 0;
}













/*class stack
{
    public:
    int size;
    int *arr;
    int top;

    stack()
    {
        this -> size = 50;
        int *arr = new int[size];
        top = -1;
    }

    void pushElement(int data)
    {
        if(top == size)
        cout<<"Stack is Full."<<endl;
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void popElement()
    {
        if(top == -1)
        cout<<"Stack is empty."<<endl;
        else
        top--;
    }

    int topElement()
    {
        if(top == -1)
        cout<<"Stack is empty."<<endl;
        else
        {
            cout<<arr[top]<<endl;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        return true;
        else
        return false;
    }

    void printStack(stack s)
    {
        stack s1;

        while(!s1.isEmpty())
        {
            s1.pushElement(s1.topElement());

            cout<<s1.topElement()<<" ";
            s1.popElement();

        }
    }
};


int main()
{
    stack f;

    f.pushElement(90);
    f.pushElement(78);
    f.pushElement(67);

    f.popElement();

    f.topElement();

    f.printStack(f);

    


    return 0;
}
*/