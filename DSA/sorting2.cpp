//Bubble Sort

#include <iostream> 
using namespace std;

int sort(int arr[], int size)
{
    for(int i=0; i<=size-1; i++)      //for round 1 to n-1
    {
        for(int j=0; j<=size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }

            //cout<<arr[j]<<" ";
        }
    }
}

int main()
{
    int arr[5] = {12,65,32,4,98};

    sort(arr, 5);
    cout<<arr[5]<<" ";

    return 0;
}