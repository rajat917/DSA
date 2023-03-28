// Doubly Linked list

#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this-> prev = NULL;
        this-> next = NULL;
    }
};

void insertAtPosition(Node* &tail, Node* &head, int position, int d)
{
    //Node* temp = new Node(d);
    if(position == 1)
    {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

    Node* exnode = head;
    int cnt = 1;
    while(cnt < position - 1)
    {
        exnode = exnode -> next;
        cnt++;
    }

    Node* temp = new Node(d);
    temp -> next = exnode -> next;
    exnode -> next -> prev = temp;
    exnode -> next = temp;
    temp -> prev = exnode;
}

void insertAtTail(Node* &tail, int d)
{
      Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
}


void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    //print(head);

    insertAtPosition(tail,head, 2, 34);
    print(head);

    insertAtPosition(tail,head, 3, 22);
    print(head);

    // insertAtTail(tail, 23);
    // print(head);

    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
    
}