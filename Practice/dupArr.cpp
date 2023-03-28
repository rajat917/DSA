// Find duplicate numbers in an array

#include <iostream>
using namespace std;

/*int arrDup(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<arr[i]<<" ";
                //return arr[i];
            }
        }
        //cout<<"Dupes not found"<<endl;
    }
    
}

int main()
{
    int arr[6] = {7,6,32,78,54,65};

    arrDup(arr, 6);

    return 0;

}*/

int arrDup(int arr[], int size)
{
    int n = 0;
    for(int i=0; i<arr.size(); i++)
    {
        n = n^arr[i];
    }

    for(int i=1; i<arr.size(); i++)
    {
        n = n^i;
    }
    return n;
}

int main()
{
    int arr[6] = {1,6,5,9,6,7};

    cout<<arrDup(arr, 6);

    return 0;
}