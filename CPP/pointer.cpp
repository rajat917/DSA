//Pointers- gives address of the variable

#include <iostream>
using namespace std;

int main()
{
    int n = 56;

    //declaring pointer
    int* z;
    z = &n;

    cout<<"The value of n- "<<n<<endl;
    cout<<"The address of n- "<<z<<endl;
    cout<<"The value at *z means n- "<<*z<<endl;

}