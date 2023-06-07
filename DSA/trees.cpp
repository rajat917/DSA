// Trees
// 4 types of traversal - Level order, inorder(LNR), preorder(NLR), postorder(LRN)

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
    //To input data to be placed on root node.
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    //creating root node and placing the data.
    root = new node(data);

    if(data == -1)
    return NULL;

    //creating left and right nodes and placing the data.
    cout<<"For the left node of "<<data<<endl;
    root -> left = buildTree(root->left);
    cout<<"For the right node of "<<data<<endl;
    root -> right = buildTree(root->right);
    return root;
}

//Level order Traversal
void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);      //Pushing root node into queue
    q.push(NULL);     //to get next line after printing of root

    while(!q.empty())
    {
        node* temp = q.front();     //pointig temp as first node/ front element of the queue
        q.pop();

        if(temp == NULL)           //If temp is NULL enter to next line
        {
            cout<<endl;
            if(!q.empty())         //If queue is not empty, place NULL after this level
            q.push(NULL);
        }
        else
        {
            cout<<temp->data<<" ";

            if(temp -> left)
            q.push(temp->left);
            
            if(temp -> right)
            q.push(temp->right);
        }
    }
}


//Inorder Traversal
void inOrder(node* root)
{
    if(root == NULL)
    return;

    inOrder(root -> left);
    cout<<root->data<<" ";
    inOrder(root -> right);
}

//PreOrder Traversal
void preOrder(node* root)
{
    if(root == NULL)
    return;

    cout<<root->data<<" ";
    preOrder(root -> left);
    preOrder(root -> right);
}

//postOrder traversal
void postOrder(node* root)
{
    if(root == NULL)
    return;

    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root->data<<" ";
}


//Build tree for level order
void buildFromLevelOrder(node * root)
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

        cout<<"For the left node of "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1)
        {
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout<<"For right node of "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1)
        {
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}

int main()
{
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    node* root = NULL;

    root = buildTree(root);

    levelOrderTraversal(root);

    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);

    buildFromLevelOrder(root);


}