// finding factorial by Recursion

#include <iostream>
using namespace std;

//Creating Recursive function
int Factorial(int n)
{
    if(n<=1)       // Creating base class so that recursive func can stop at this point.
    return 1;

    return n * Factorial(n-1);
}

int main()
{
    int a;
    cin>>a;

    cout<<Factorial(a);

    return 0;
}