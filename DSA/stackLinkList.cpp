// Stack with linked List

#include <iostream>
//#include <stack>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

class stack
{
    Node *top;

    public:
    stack()
    {
        top = NULL;
    } 

    void push(int data)
    {
        Node* temp = new Node(data);

        if(!temp)
        {
            cout<<"Stack OverFlow."<<endl;
        }

        temp -> data = data;     //putting data into node.
        temp -> next = top;     //pointing temp's next as top
        top = temp;            //making temp as top.
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    int peek()
    {
        if(!isEmpty())
        {
            return top -> data;
        }
        else
        exit(1);
    }

    void pop()
    {
        Node* temp;

        if(isEmpty())
        {
            cout<<"UnderFlow."<<endl;
        }
        else
        {
            temp = top;
            top = top -> next;
            free(temp);
        }
    }

    //to print all the elements of stack
    void display()
    {
        Node* temp;
        if(top == NULL)
        {
            cout<<"Underflow."<<endl;
        }
        else
        {
            temp = top;
            while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp -> next;
            }
        }
    }
};

int main()
{
    stack s;

    s.push(89);
    s.push(90);
    s.push(3);
    s.push(60);
    s.push(34);

    cout<<s.peek()<<endl;

    s.pop();
    s.pop();

    cout<<s.peek()<<endl;

    s.display();
}
