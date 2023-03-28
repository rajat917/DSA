//It will send the original to the fucntion

#include <iostream>
using namespace std;

void byReference(string &s)      //Put & sign before to pass by Reference
{
    s[0] = 'T';
    cout<<s<<endl;
}

int main()
{
    string s = "Raj";

    byReference(s);   // This will print Taj
    cout<<s<<endl;    // It will also print Taj as in this, we send the original so it got replaced to the Taj.S

}