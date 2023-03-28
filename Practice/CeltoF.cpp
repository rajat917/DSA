//Temperature conversion of celsius to farenhite or vice versa

#include <iostream>
using namespace std;

int main()
{
    int c,f,x;
    cout<<"Choose C to convert it to Celsius or F for vice versa- "<<endl;
    cin>>x;

    if (x == c)
    {
        cout<<"Enter Temp- ";
        cin>>c;
        c = x*(9/5) + 32;
        cout<<c;
    }

    else if (x == f)
    {
        cout<<"Enter temp- ";
        cin>>f;
        f = (x-32)*(5/9);
        cout<<f;
    }  

}