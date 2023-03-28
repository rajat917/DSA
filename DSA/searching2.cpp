// Binary search
/* find middle element -> compare with key -> if found, return index else repeat the process with new start point*/

#include <iostream>
using namespace std;

int binSearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start / 2);       // cos it does not exceed the value range of int. or s-e/2.


    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        

        if(key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end-start/2);
    }

    return -1;

}

int main()
{
    int even[6] = {24,34,65,87,98,102};
    int odd[5] = {12,23,34,56,78};

    int evenIndex = binSearch(even, 6, 102);
    cout<<"Index of 102 is "<<evenIndex<<endl;

    int oddIndex = binSearch(odd, 5, 34);
    cout<<"Index of 34 is "<<oddIndex<<endl;


}