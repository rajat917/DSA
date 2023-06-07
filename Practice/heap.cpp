#include <iostream>
using namespace std;

class heap
{
    public:
    int arr[10];
    int size;

    heap()
    {
        size = 0;
        arr[10] = -1;
    }

    void insert(int data)
    {
        int index = size;
        arr[size] = data; 

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

    void deletion()
    {
        if(size == 0)
        {
            cout<<"Nothing to print"<<endl;
            return ;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i < size)
        {
            int left = 2*i;
            int right = 2*i+1;

            if(left<size && arr[left] < arr[i])
            swap(arr[left], arr[i]);
            
        }
    }
};