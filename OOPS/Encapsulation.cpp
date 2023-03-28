// Encapsulation

#include <iostream>
using namespace std;

class student 
{
    private:
    string name;
    int roll;

    public:
    string getName()
    {
        return this->name;
    }
    int getRoll()
    {
        return this->roll;
    }
    
    student (int r)
    {
        //n = name;
        r = roll;
    }
};

int main()
{
    student Rajat(125);
    Rajat.getRoll();
}