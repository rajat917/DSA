//Singly linked list

#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);

    temp -> next = head;
    temp = head;
}

void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);

    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    if(position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node* node1 = head;
    int cnt = 1;

    while(cnt < position - 1)
    {
        node1 = node1 -> next;
        cnt++;
    }

    Node* temp = new Node(d);
    node1 -> next = temp -> next;
    node1 -> next  = temp;

    if(node1 -> next == NULL)
    {   
        insertAtTail(tail, d);
        return;
    }

}

void print(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void deleteNode(Node* &head, int position)
{
    if(position == 1)
    {
        Node* temp = head;
        head = head -> next;
        temp -> next  = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            curr++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int main()
{
    Node* n1 = new Node(5);
    Node* head = n1;
    print(head);


    insertAtHead(head, 6);
    print(head);

    

}
