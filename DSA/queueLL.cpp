//Queue using Linked List

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

void insertion(node* &head, int d)
{
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void deletion(node* &tail)
{
    node* temp = tail;
    node* prev = NULL;
    int cnt = 1;

    while(temp -> next != NULL)
    {
        prev = temp;
        temp = temp -> next;
        cnt++;
    }

    prev -> next = NULL;
    delete temp;
}

int print(node* &head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->size<<" ";
        temp = temp -> next;
    }
}


int main()
{
    node* n = new node(89);
    node* head = n;
    node* tail = n;

    insertion(head, 67);
    insertion(head, 34);
    insertion(head, 540);

    print(head);

    deletion(tail);

    print(head);

    

}
