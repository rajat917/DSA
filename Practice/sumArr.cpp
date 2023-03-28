//sum of elements in an array

#include <iostream>
using namespace std;

int sumArray(int a[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }

    return sum;
}

int main()
{
    int size;
    cin>>size;

    int a[50];
    for(int i=0; i<size; i++)
    cin>>a[i];

    cout<<"The sum is "<<sumArray(a, size)<<endl;

    return 0;
}