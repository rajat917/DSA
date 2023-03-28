// Print Counting

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count = 1;
    /*int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<count<<" ";
            count += 1;
            j += 1;
        }
        cout<<endl;
        i += 1;
    }*/

    for (int i = 0; i <= n; i++)
    {
        int j = 1;
        for (j=1; j<=n; j++)
        {
            cout<<count<<" ";
            count += 1;
            j += 1;
        }
        cout<<endl;
        i += 1;
    }
}