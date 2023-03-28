#include <iostream>
using namespace std;

class stack
{
    public:
    int *arr;
    int size;
    int top;

    stack(int size)
    {
        this -> size  = size;
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
            cout<<"Overflow";
        }
    }

    int pop()
    {
        if(top > 1)
        {
            top--;
        }
        else
        {
            cout<<"Underfloww";
            return -1;
        }
    }

    int peek()
    {
        if(top>1)
        {
            return arr[top];
        }
        else
        {
            cout<<"Empty";
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack s(6);

    s.push(9);
    s.push(10);
    s.push(13);
    s.push(78);
    s.push(9);

    cout<<s.peek()<<endl;

    s.pop();

    cout<<s.peek()<<endl;
}