// Minimum and Maximum numbers in a Array

#include <iostream>
#include <limits.h>        // For INT_MIN or INT_MAX function
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }

    return max;
}

int getMin(int arr[], int size)
{
    int mini = INT_MAX;
    for(int i = 0; i <= size; i++)
    {
        mini = min(mini, arr[i]);
    }

    return mini;
}


int main()
{
    int n;
    cin>>n;

    int arr[50];

    for(int i = 0; i < n; i++)
    cin>>arr[i];

    cout<<"The max no. is "<<getMax(arr, n)<<endl;
    cout<<"The min no. is "<<getMin(arr, n)<<endl;

    return 0;
}