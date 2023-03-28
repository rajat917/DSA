// Selection Sort

#include <iostream>
using namespace std;

int Sort(int arr[], int size)
{
    for(int i=0; i<=size-1; i++)
    {
        int minIndex = i;

        for(int j=i; j<size; j++)
        {
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n = 5;
    int arr[n];

    cout<<"Enter the elements of Array- ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }

    Sort(arr, n);

    return 0;
}