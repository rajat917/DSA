// Print

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    /*int i = 1;

    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
           // cout<<j;           //In Ascending order
           cout<<n-j+1;          // In Descending order
            j += 1;
        }
        cout<<endl;
        i += 1;
    }*/

    for (int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
           // cout<<j;            //In ascending order
           cout<< n - j + 1;      // In descending order
        }
        cout<<endl;
    }
}