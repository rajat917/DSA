// Circular Linked List

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
        this-> next = NULL;
    }

    ~Node()
    {
        int value = this-> data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory Freed."<<endl;
    }
};

void insertNode(Node* &tail,int element, int d)
{
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
    }
    else
    {
        Node* exnode = tail;
        while(exnode -> data != element)
        {
            exnode = exnode -> next;
        }

        Node* temp = new Node(d);
        temp -> next = exnode -> next;
        exnode -> next = temp;
    }
}

void print(Node* tail)
{
    Node* temp = tail;
    do
    {
        cout<<tail->data<<" ";
        tail = tail -> next;
    } while (tail != temp);
    
    cout<<endl;
}

void deleteNode(Node* tail, int value)
{
    if(tail == NULL)
    {
        cout<<"The list is empty!!"<<endl;
        return;
    }
    else
    {
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        if(curr == prev)
        {
            tail = NULL;
        }
        else if(tail == curr)
        {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{
    Node* tail = new Node(10);

    insertNode(tail, 10, 34);
    //print(tail);

    insertNode(tail, 34, 23);
    //print(tail);

    insertNode(tail, 34, 20);
    //print(tail);

    deleteNode(tail, 10);
    print(tail);


    return 0;
}