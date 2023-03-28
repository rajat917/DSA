//Array in Cpp

#include <iostream>
using namespace std;

int printArr(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        return arr[i];
    }
}


int main()
{
    int n = 10;

    int arr[n];
    cout<<"Enter the elements in array- ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[n];
    }

    cout<<"The elements of array are- "<<endl;
    cout<<printArr(arr, n)<<endl;;


    return 0;
}