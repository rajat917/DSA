// Inheritance 

#include <iostream>
using namespace std;

class Human
{
    public:
    int height;
    int age;
    int weight;

   /* int getheight()
    {
        return height;
    } */
};

class Male : public Human
{
    public:
    string color;
};

class Female : public Human
{
    public:
    string hobby;
};

int main()
{
    Male Rajat;
    Rajat.height = 175;
    Rajat.weight = 65;
    Rajat.color = 'W';

    Female Chuku;
    Chuku.height = 170;
    Chuku.hobby = 'P';

    cout<<Rajat.height<<endl;
    cout<<Chuku.hobby<<endl;
}
