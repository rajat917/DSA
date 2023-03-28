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
        arr = new int[size];
        top = -1;
    }

    void push(int d)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = d;
        }
        else
        cout<<"Overflow."<<endl;
    }

    void pop()
    {
        if(top >= 0)
        top--;
        else
        cout<<"Underflow"<<endl;
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        cout<<"Underflow"<<endl;
    }

    bool is_Empty()
    {
        if(top == -1)
        return true;

        else
        return false;
    }

    void display(stack n)
    {
       //stack n1;
        while(!n.is_Empty())
        {
            n.push(n.peek());
            cout<<n.peek()<<" ";
            n.pop();
        }
    }
};

int main()
{
    stack s(5);

    s.push(90);
    s.push(78);

    cout<<s.peek();

    cout<<s.display();

    
}