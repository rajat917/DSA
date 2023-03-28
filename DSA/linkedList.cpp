// Linked List

#include <iostream>
using namespace std;

//creating empty node
class Node
{
    public:
    int data;      //To store data in the node
    Node* next;   //For address/pointer of next node.

    Node(int data)     //Constructor to make many nodes
    {
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor to delete first node
    ~Node()
    {
        int value = this -> data;
        if(this -> next != NULL)         // If next node null nahi haii
        {
            delete next;                 // then delete the next node
            this -> next = NULL;         // and make equal to null
        }
        cout<<"Memory freed."<<endl;
    }
};



//Insertion of new node at head.....From creating a new node to setteling before the existing node1.
void insertAtHead(Node* &head, int d)
{
    //**** temp is the new node we want to create i.e. from this we can create node2, node3 and so on.
    Node* temp = new Node(d);      //Creating new node.
    temp -> next = head;          //ab iss node2 ke next(i.e. NULL) ko head pe point krwado.
    head = temp;                 //Ab head ko node1 se hatake node2 pe point krwado
}


//Insertion of new node at tail....from creating new node to pointing at tail of the existing node.
void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);              //Creating a new node.
    tail -> next = temp;                  // tail ke next means existing node ke next ko temp pe point kro
    tail = temp; /*or tail->next hai*/   // ab tail ko new node pe point krdo
}


//Insertion of new node in any postion
void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    if(position == 1)         //If user puts in first position of linkedlist.
    {
        insertAtHead(head, d);
        return;
    }

    //Traverse from first node to position - 1 node.
    Node* temp = head;       //First node or current node
    int cnt = 1;            // current or first node position or node 1.

    while(cnt < position - 1)         //Jb tk cnt node new node ke inerstion position - 1 hai
    {
        temp = temp -> next;          // tb tk cnt node ko traverse krte rho
        cnt++;                       // node ko aage badate rho
    }

    if(temp -> next == NULL)        //If user puts last position in the ll.
    {
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);     //New node which has to be insert at any position.
    nodeToInsert -> next = temp -> next;  // nti ka next node current node ka next node hai....means pointing tail of NTI node to next node of the postion.
    temp -> next = nodeToInsert;          // means to insert node after this position.
}


//To print the linked list with all nodes
void print(Node* &head)
{
    Node* temp = head;        //to point head to the latest node created.
    while(temp != NULL)       // until the address of node becomes NULL....
    { 
        cout<< temp -> data <<" ";         //Print the vale of the node.
        temp = temp -> next;                   //Let shift the current node to the next node. 
    } 
    cout<<endl;
}


// To delete any node in the ll
void deleteNode(int position, Node* &head)
{
    if(position == 1)    // To delete the first node.
    {
        Node* temp = head;     //Make temp as node wanted to delete
        head = head -> next;   // first node ko point kro second node pe.....node2 becomes first.
        temp -> next = NULL;   // To unpoint temp from next node so that all other nodes after that cant get deleted.
        delete temp;           // To delete first node.
    }
    else
    {
        //To delete any node.
        Node* curr = head;     //current node at first position
        Node* prev = NULL;     //yet to decide which node.
        int cnt = 1;

        while(cnt < position)
        {
            prev = curr;             //To make previous node to be first or current node.
            curr = curr -> next;    //To make current or first node to be next node.
            cnt++;
        }

        prev -> next = curr -> next;    //next of prev node pointed to node next of cuu instead of curr node itself.
        curr -> next = NULL;        // To unpoint curr node from its next node so that other nodes after that cant get deleted.
        delete curr;       // To delete curr node.
    }
}

int main()
{
    //Making Node1
    Node* node1 = new Node(10/*data*/);   //Making node1 at the node address
    //cout<<node1 -> data<<endl;           //print data in the node
    //cout<<node1 -> next<<endl;          // print address of next node present in the node1.
    
    Node* head = node1;      //Head pointed to node1.
    print(head);

    Node* tail = node1;     // Tail pointed to node1.

    insertAtHead(head, 78);      //inserting new node in the linkedlist that is node2
    print(head);

    insertAtTail(head, 99);     //inserting new node in the linkedlist that is node3.
    print(tail);

    insertAtPosition(head,tail, 4, 39);   // will print at position no. 3 from head. Also, we have to use both head and tail here because user can put any position.
    
    print(head);               //Printing head so that whole linkedlist can be printed from Head to Tail, i.e. from 10 to 99.

    deleteNode(4, head);

    //to check value of head and tail
    cout<<"Head- "<<head -> data<<endl;
    cout<<"Tail- "<<tail -> data<<endl;


    return 0;
}