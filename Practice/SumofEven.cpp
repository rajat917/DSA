// Calculate sum of n even numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int i = 0;

    cin>>n; 

    while (i <= n)
    {
        /*sum = (sum + i);
        i = i + 2;*/

        sum += i;
        i += 2;
    }

    cout<<sum<<endl;

    return 0;
}