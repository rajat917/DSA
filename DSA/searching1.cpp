//Linear Search

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {34,56,78,90,23};
    int key;

    cout<<"Enter the element- ";
    cin>>key;

    for(int i=0; i<5; i++)
    {
        if(arr[i] == key)
        {
            cout<<"The element "<<arr[i]<<" is present."<<endl;
        }
    }

}