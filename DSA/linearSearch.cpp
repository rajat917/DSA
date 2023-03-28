// Linear Search

#include <iostream>
using namespace std;

bool linearSearch(int a[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(key == a[i])
        return 1;
    }
    return 0;
}

int main()
{
    int a[5] = {34,56,78,-23,-45};

    int key;
    cout<<"Enter the key- ";
    cin>>key;

    bool got = linearSearch(a, 5, key);
    {
        if (got)
        cout<<"THe element is present";

        else
        cout<<"The element is absent";
    }

    return 0;
}