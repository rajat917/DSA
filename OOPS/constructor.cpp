// Constructors

#include <iostream>
using namespace std;

class Hero
{
    private:
    int Health;

    public:
    int Stealth;
    string level;

    Hero(int h, int s, char l)
    {
        Health = h;
        Stealth = s;
        level = l;
    }

    int getHealth()
    {
        return Health;
    }
    void setHealth(int h)
    {
        Health = h;
    }

    void getInfo()           // Used to write all info about object once, so we dont have to write again
    {
        cout<<"Health- :"<<getHealth()<<endl;
        cout<<"Stealth- "<<Stealth<<endl;
        cout<<"Level- "<<level<<endl;    
    }
};

int main()
{
    /*Hero BB(90, 100, 'A');
    cout<<"The health of bb- "<<BB.getHealth()<<endl;
    cout<<"The level of BB- "<<BB.level<<endl;

    Hero HomeLander(10000, 100, 'C');
    cout<<"Stealth of Homelander- "<<HomeLander.Stealth<<endl;
    cout<<"Level of Homelander- "<<HomeLander.level<<endl;*/

    Hero BB(90, 100, 'A');
    BB.getInfo();         

    Hero HL(1000, 100, 'C');
    cout<<"For Homelander- "<<endl;;
    HL.getInfo();

    return 0;
}