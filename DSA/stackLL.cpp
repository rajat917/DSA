// Stack using linked list

#include <iostream>
using namespace std;

class node
{
    public:
    int size;
    node* next;

    node(int size)
    {
        this -> size = size;
        this -> next = NULL;
    }
};

void push(node* &head, int d)
{
    node* temp = new node(d);
    temp -> next  = head;
    head = temp;
}

void pop(node* &head)
{
    
    node* temp = head;
    if(temp == NULL)
    cout<<"Stack is Underflow."<<endl;
    else
    {
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
}

int print(node* head)
{
    node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp -> size<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    node* n = new node(89);
    node* head = n;

    push(head,78);
    push(head,45);
    push(head,34);

    print(head);

    pop(head);
    pop(head);

    print(head);


}