// for loop, while loop and Do while loop
// print natural numbers

#include <iostream>
using namespace std;

int main()
{
    
    for(int i = 1; i <= 10; i++)
    cout<<i<<" ";

    int i = 11;
    while(i<=20)
    {
        cout<<i<<" ";
        i++;
    }

    i = 21;
    do
    {
        cout<<i<<" ";
        i++;
    }
    while(i<=30);
    return 0;
}

