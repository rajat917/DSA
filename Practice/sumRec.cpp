// Sum of 1 to n numbers using recursion

#include <iostream>
using namespace std;

int sumNum(int a[], int size)
{
    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the number of element you want to add- ";
    cin>>n;

    int a[50];
    cout<<"Enter the elements- "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"The sum of the elements are- "<<sumNum(a,n)<<endl;
    
}