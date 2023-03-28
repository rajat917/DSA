// 

#include <iostream>
using namespace std;

class person
{
    private:
    string name;
    int age;

    public:

    string getName()
    {
        return name;
    }
    void setName(string n)
    {
        name = n;
    }

    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        age = a;
    }
};

int main()
{
    string x;
    int y;
    person obj;
    obj.setName(x);
    obj.setAge(y);

    cout<<"Input name- "<<endl;
    cin>>x;

    cout<<"Input age- "<<endl;
    cin>>y;

    /*cout<<obj.getName()<<endl;
    cout<<obj.getAge()<<endl;*/
    
    cout<<x<<endl;
    cout<<y<<endl;
}