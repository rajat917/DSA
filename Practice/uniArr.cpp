// Find unique number in array (means find the no. which is occuring only once)

#include <iostream>
using namespace std;

int uniArr(int arr[], int n)
{
    /*for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] != arr[j])
            {
                //cout<<arr[j]<<" ";
                return arr[i];
            }
        }
    }*/

    int ans = 0;
    for(int i=0; i<n; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[6] = {11,11,12,11,11,11};

    cout<<uniArr(arr, 6);

    return 0;
}