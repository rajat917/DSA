// Classes, Objects, Access Modifiers and Getter & Setter.

#include <iostream>
using namespace std;

class Hero                  // Creating Class named Hero.
{
    private:               // Access Modifier- private
    int Health;

    public:                // Access Modifier- public
    int Stealth;
    char level;

    // Now to access data members in private, we'll use get and set
    int getHealth()
    {
        return Health;
    }
    void setHealth(int h)
    {
        Health = h;
    }
};

int main()
{
    Hero BB;            //Creating Object   // static allocation

    BB.level = 'A';

    BB.Stealth = 100;         // Variable defintion
    cout<<"The Stealth is: "<<BB.Stealth<<endl;

    BB.setHealth(90);        // Variabel defintion of private member of class
    cout<<"The Health is: "<<BB.getHealth()<<endl;

    //dynaminc allocation
    Hero *B = new Hero;
    (*B).Stealth = 100;
    B->level = 'A';
    cout<<"the stealth is: "<<(*B).Stealth<<endl;
    cout<<"The level is: "<<B->level<<endl;
}