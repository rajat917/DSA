// circular queue

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

    int enqueue(int data)
    {
        if((front == 0 && rear == size -1)  || (rear == front-1 % size -1))
        cout<<"Queue is full"<<endl;

        else if(front == -1)
        front = rear = 0;

        else if(rear == size-1 && front!=0)
        rear = 0;

        else
        rear++;

        arr[rear] = data;
        return true;

    }
};

int main()
{
    queue q1;

    q1.enqueue(89);
    q1.enqueue(90);

    
}