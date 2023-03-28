// Count the digits in the given number

#include <iostream>
using namespace std;

long countDig(long n)
{
    int count = 0;
    
    while(n != 0)
    {
        n = n/10;
        ++count;
    }

    return count;
}

int main()
{
    long n;
    cout<<"Enter the number- ";
    cin>>n;

    cout<<countDig(n)<<endl;
}