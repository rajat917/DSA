//Queue using Array

#include <iostream>
//#include <queue>     //For STL
using namespace std;

class queue
{
    public:
    int *arr;
    int size;
    int qfront, rear;

    queue()
    {
        size = 50;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    void enqueue(int element)
    {
        if(rear == size)
        {
            cout<<"Queue is full"<<endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }

    int dequeue()
    {
        if(qfront == rear)
        {
            return -1;
        }
        else
        {
            arr[qfront] = -1;
            qfront++;
            
            if(qfront == rear)
           {
            qfront = 0;
            rear = 0;
           }
           return arr[qfront];
        }
    }

    bool isEmpty()
    {
        if(qfront == rear)
        return true;
        else
        return false;
    }

    int front()         //NOTE-- Here this fucntion if different from qfront.
    {
        if(qfront == rear)
        return -1;
        else
        return arr[qfront];
    }

};

int main()
{
    queue q1;

    q1.enqueue(78);
    cout<<q1.front()<<endl;

    q1.enqueue(90);
    cout<<q1.front()<<endl;



    













    /* Queue using STL
    queue<int> q;

    q.push(89);
    q.push(78);
    q.push(45);
    cout<<q.front()<<endl;

    q.pop();

    if(q.empty())
    {
        cout<<"Queue is empty."<<endl;
    }

    cout<<q.size()<<endl;


    return 0;*/

}