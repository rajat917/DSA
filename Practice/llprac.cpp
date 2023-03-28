//Singly linked list practic
// Make linledlist, insert at head, insert at tail, deletion

#include <iostream>
using namespace std;

class node
{
    public:
    int value;
    node* next;

    node(int value)
    {
        this -> value = value;
        this -> next = NULL;
    }

    ~node()
    {
        int del = this -> value;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memory freed.";
    }

};

void insertAtHead(node* &head, int d)
{
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(node* &tail, int d)
{
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(node* &head, node* &tail, int position, int d)
{
    if(position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    node* temp = head;
    int cnt=1;

    while(cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }

    if(temp->next == NULL)
    {
        insertAtTail(head, d);
        return;
    }

    node* nodeToInsert = new node(d);
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;
}

void print(node* &head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void deletenode(int position, node* &head)
{
    if(position == 1)
    {
        node* temp = head;
        head = head -> next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node* curr = head;
        node* prev = NULL;
        int cnt;
        
        if(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    insertAtHead(head, 22);
    insertAtTail(tail, 20);
    insertAtPosition(head,tail, 3, 78);
    print(head);

   


    return 0;
}