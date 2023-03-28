// Swap adjacent elements in array

#include <iostream>
using namespace std;

int printArr(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

void swapArr(int a[], int size)
{
    for(int i=0; i<size; i+=2)
    {
        if(i+1 < size)
        swap(a[i], a[i+1]);
    }
}

int main()
{
    int arr[6] = {1,6,9,4,3,7};

    swapArr(arr,6);
    printArr(arr,6);
}