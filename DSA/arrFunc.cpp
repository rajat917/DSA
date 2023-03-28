// Array with function

#include <iostream>
using namespace std;

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int n;
    //cout<<"Enter the elements- ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[n];
    }

    cout<<"The elements in the array are- "<<printArray(arr, n)<<endl;
   

    return 0;
}