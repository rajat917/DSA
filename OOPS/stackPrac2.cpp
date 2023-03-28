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
        this -> size = size;
        top = -1;
    }

    //push element in stack
    void push(int element)
    {
        //check if stack is full
        if(size - top > 1)
        {
            cout<<"The stack is OverFlow."<<endl;
        }
        else
        {
            top++;                    //making next empty space as top.
            arr[top] = element;      //adding new data as top.
        }
    }

    //pop element in stack
    void pop()
    {
        //check if stack is empty
        if(top >= 0)
        {
            top--;            //making previous data as top, indirectly deleting the top value.
        }
        else
        {
            cout<<"Underflow."<<endl;
        }
    }


    //getting top element of stack
    int peek()
    {
        if(top == -1)
        {
            cout<<"Stack is Empty."<<endl;
        }
        else
        {
            return arr[top];
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