// It send the copy to the function

#include <iostream>
using namespace std;

void byValue(string s)
{
    s[0] = 'T';
    cout<<s<<endl;
}

int main()
{
    string s = "Raj";
    cout<<s<<endl;

    byValue(s);    // This will call function and will print Taj instead of Raj.

}