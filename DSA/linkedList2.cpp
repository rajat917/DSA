//Doubly Linked List
// Two sided linked list which contain address of both previous and next node.

#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory Freed."<<endl;
    }
};

//Traversing/printing the ll.
void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

//To get size of the ll
int getLength(Node* head)
{
    int len = 0;
    Node* temp = head;

    while(temp != NULL)
    {
        len++;
        temp = temp -> next;
    }

    return len;
}

//insertion at head
void insertAtHead(Node* &head, int d)
{
    if(head == NULL)                    //to create first node if ll is empty
    {
        Node* temp = new Node(d);
        head = temp;
    }
    else
    {
        Node* temp = new Node(d);       // Created a node
        temp -> next = head;           // pointed new node to the existing one.
        head -> prev = temp;          // pointed prev node of exisitng node to the new node.
        head = temp;                 // pointed new node as head.
    }        
}

//insertion at tail
void insertAtTail(Node* &tail, int d)
{
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);          //Created a node
        tail -> next = temp;              // pointed next of node to new node.
        temp -> prev = tail;             // pointed prev address of new node to next add of exising one.
        tail = temp;                    // made new node a tail/last node.
        //temp -> next = NULL;          // Pointed next add of new node to NULL
    }
}

//insertion at position
void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    if(position == 1)
    {
        insertAtHead(head, d);
        return;
    }  

    Node* exnode = head;         //Pointing exisitng node to head.
    int cnt = 1;
    while(cnt < position - 1)
    {
        exnode = exnode -> next;            //traversing from head node to the prev node where the new node to be added.
        cnt++;
    }

    Node* temp = new Node(d);                   //Here, temp = nodeToInsert or temp is the node which has to be inserted.
    temp -> next = exnode -> next;             //top point prev of new node to next of ex node.
    exnode -> next -> prev = temp;            //to point prev of position+1 node to new node.
    exnode -> next = temp;                   //to point next of ex node to new node.
    temp -> prev = exnode;                  //to point prev of new node to ex node.

    /*Node* temp = new Node(d);
    temp ->next = exnode -> next;
    exnode -> next -> prev = temp;
    exnode -> next = temp;
    temp -> prev = exnode;*/


    if(exnode -> next == NULL)
    {
        insertAtTail(tail, d);                //if exisiting node ka next NULL hai, it means last/ tail node.
        return;
    }
}

void deleteNode(Node* head, int position)
{
    if(position == 1)
    {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
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
            cnt++;
        }

        //curr -> next -> prev = curr -> prev;
        curr -> prev = NULL;                          //delete node's previous become null
        /*curr -> */prev -> next = curr -> next;     //pre node of del node points to next node of del node.
        curr -> next = NULL;                        // next of del node to be null.
        delete curr;
    }
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    //print(head);
   // cout<<getLength(head);

    insertAtHead(head, 8);
    //print(head);

    insertAtTail(tail, 17);
   // print(head);

    insertAtPosition(head,tail, 4, 14);
    print(head);

    // deleteNode(head, 3);
    // print(head);

    
    return 0;
}
