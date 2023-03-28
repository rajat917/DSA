// Queue using array

#include <iostream>
using namespace std;


class queue
{
    public:
    int size;
    int *arr;
    int front, rear;

    queue()
    {
        int size = 50;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int element)
    {
        if(rear == size)
        cout<<"Queue is full"<<endl;
        else
        {
            arr[rear] = element;
            rear++;
        }
    }

    int dequeue()
    {
        if(front == rear)
        return -1;
        else
        {
            arr[front] = -1;
            front++;

            if(front == rear)
            {
                front = 0;
                rear = 0;
            }
            return arr[front];
        }
    }


    bool isEmpty()
    {
        if(front == rear)
        return true;
        else
        return false;
    }

    int top()
    {
        if(front == rear)
        return -1;
        else
        return arr[front];
    }

    int printQueue()
    {
        while(front == rear)
        {
            cout<<arr[front]<<" ";
            front++;
        }
    }

};

int main()
{
    queue q1;

    q1.enqueue(78);
    q1.enqueue(90);

    int i=0;
    while(i<=5)
    {
        q1.enqueue(i);
        i++;
    }

   cout<<q1.top()<<endl;

   q1.dequeue();
   q1.dequeue();
   
   cout<<q1.top()<<endl;

   cout<<q1.isEmpty();




    return 0;
}