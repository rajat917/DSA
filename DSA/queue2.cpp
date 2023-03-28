// Circular Queue

#include <iostream>
using namespace std;

class queue
{
    public:
    int *arr;
    int size;
    int front, rear;

    queue()
    {
        int size = 50;
        int *arr = new int[size];
        int front = 0;
        int rear = 0;
    }

    bool enqueue(int value)
    {
        if (((front == 0) && (rear = size-1)) || (rear == (front-1)%(size-1)) )         //To check if queue is full.
        {
            cout<<"Queue is emtpy."<<endl;
            return false;
        }
        else if(front == -1)                  //To push first element
        {
            front = rear = 0;
        }
        else if(rear == -1 && front != 0)        //To maintain cyclic nature.
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    int dequeue()
    {
        if(front == -1)                    //To check if queue is empty.
        {
            cout<<"Queue is empty."<<endl;
            return -1;
        }

        arr[front] = -1;

        if (front == rear)              //single element is present
        {
            front = rear = -1;
        }

        else if(front == size -1)        //To maintain cyclic nature.
        {
            front = 0;
        }

        else
        {
            front++;
        }
        return arr[front];
    }

    int frontelement()
    {
        if(front == rear)
        return -1;

        else
        {
            cout<<arr[front]<<endl;
        }
    }

    bool isEmpty()
    {
        if(front == rear)
        return true;

        else
        return false;
    }
};

int main()
{
    queue q1;

    q1.enqueue(89);
    q1.enqueue(98);
    q1.enqueue(100);

    q1.dequeue();

    cout<<q1.frontelement();


    return 0;
}