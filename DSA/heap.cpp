//Heap in DSA
/* 
Heap is Complete Binary Tree(CBT) with heap order property.
CBT -> every level is completely filled excpet the last level
       Also, node always leans towards the left.
Max Heap - Value of Parent node will be greator than child nodes
Min Heap - Value of Child node will be smaller than parent node 

if Node at i index
then, 
     left child is at 2*i index
     right child is at 2*i+1 index
     parent is at i/2 index
*/

// MAX HEAP

#include <iostream>
#include <queue>
using namespace std;

class heap
{
    public:
    int arr[50];
    int size;

    heap()
    {
        arr[50] = -1;
        size = 0;
    }

    //Insert in heap
    void insert(int data)
    {
        size = size + 1;        //taking 1st index to put not 0 index
        int index = size;
        arr[index] = data;       //putting the data in heap

        //checking and putting greator data as parents in max heap
        while(index < size)
        {
            int parent = index/2;

            if(arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                parent = index;
            }
            else
            return;
        }
    }

    //Deletion of element from heap
    void deletion()
    {
        //check if heap is null
        if(size == 0)
        {
            cout<<"Nothing to delete here. "<<endl;
            return;
        }

        //replacing root node and last node of heap, so we can delete element of root node
        arr[1] = arr[size];
        size--;        //deleted element

        int index = 1;
        while(index < size)
        {
            int leftIndex = 2*index;
            int rightIndex = 2*index+1;

            //checking if root node is smaller than child node and replacing them
            if(leftIndex < size && arr[index] < arr[leftIndex])
            {
                swap(arr[index], arr[leftIndex]);
                index = leftIndex;
            }
            else if(rightIndex < size && arr[index] < arr[rightIndex])
            {
                swap(arr[index], arr[rightIndex]);
                index = rightIndex;
            }
            else
            return;
        }
    }

    //printing the heap
    void print()
    {
        for(int i=1; i<=size; i++)
        cout<<arr[i]<<" ";

        cout<<endl;
    }
};


//Heapify algo- Convert cbt to min or max heap OR places node to right position.
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<=n && arr[largest]< /* > for min heap*/ arr[left])
    largest = left;

    if(right<=n && arr[largest]<arr[right])
    largest = right;

    if(largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr,n,largest);
    }
}

//Heap Sort
void heapSort(int arr[], int n)
{
    int size = n;
    
    while(size > 1)
    {
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}

int main()
{
    heap h;

    h.insert(21);
    h.insert(39);
    h.insert(15);
    h.insert(98);
    h.insert(65);
    h.insert(45);

    h.print();

    h.deletion();

    h.print();

    cout<<endl<<endl;

    int arr[8] = {-1, 56,34,78,67,23,89,90};
    int n = 7;

    //Heap creation
    for(int i=n/2; i>0; i--)
    heapify(arr, n, i);

    cout<<"printing the array- "<<endl;
    for(int i=1; i<=n; i++)
    cout<<arr[i]<<" ";

    cout<<endl;


    //Heap Sort
    heapSort(arr, n);

    cout<<"Printing sorted array- "<<endl;
    for(int i=1; i<=n; i++)
    cout<<arr[i]<<" ";

    cout<<endl<<endl;


    //Heap using Priority Queue
    //Max Heap
    cout<<"Max heap using priority queu- "<<endl;
    priority_queue<int> q;
    q.push(6);
    q.push(9);
    q.push(4);
    q.push(3);

    cout<<q.top()<<endl;
    cout<<q.size()<<endl;

    q.pop();
    cout<<q.top()<<endl;
    cout<<q.size()<<endl;

    //Min Heap
    cout<<"Min heap using priority queue- "<<endl;
    priority_queue<int, vector<int>, greater<int> > mq;

    mq.push(6);
    mq.push(9);
    mq.push(24);
    mq.push(5);

    cout<<mq.top()<<endl;
    cout<<mq.top()<<endl;

    mq.pop();
    cout<<mq.top()<<endl;
    cout<<mq.top()<<endl;
    



    return 0;

}