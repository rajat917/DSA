//Trees practice

#include <iostream>
#include <queue>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root)
{
    //To get data to store in root node/ creation of root node.
    int data;
    cout<<"Enter the data- "<<endl;
    cin>>data;
    root = new node(data);

    if(data == -1)
    return NULL;

    //Now creation of left and right nodes of the tree
    cout<<"For the left side of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"For the right side of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

//Level order traversal or breadth first search
void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);    //to change level after root node

    while(!q.empty())
    {
        node* temp = q.front();    //queue ka front element
        q.pop();                  // poped first element so second ele can be front

        if(temp == NULL)
        {
            cout<<endl;         //means level is comp
            if(!q.empty())     // mean there are child node remain
            q.push(NULL);
        }

        else
        {
            cout<<temp->data<<" ";   // print that element
            if(temp->left)          //if temp ke left ko print krna then push left
            q.push(temp->left);

            if(temp->right)        //if right then push right
            q.push(temp->right);
        }
    }
}

//Inorder traversal- LNR
void InOrder(node* root)
{
    if(root == NULL)
    return;

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

//PreOrder Traversal- NLR
void preorder(node* root)
{
    if(root == NULL)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//PostOrder Traversal- LRN
void postorder(node* root)
{
    if(root == NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* &root)
{
    queue<node*> q;

    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    //7 10 3 -1 -1 6 -1 -1 4 18 -1 -1 13 29 -1 -1 -1
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    node* root = NULL;

   /* root = buildTree(root);

   levelOrderTraversal(root);



   InOrder(root);
   cout<<endl;
   preorder(root);
   cout<<endl;
   postorder(root);*/


   buildFromLevelOrder(root);
   
   levelOrderTraversal(root);
   
}
