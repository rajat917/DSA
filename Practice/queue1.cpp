//Queue using STL


#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    queue<int> q;

    q.push(89);
    q.push(90);
    q.push(100);

    cout<<q.front()<<endl;
    cout<<q.size()<<endl;

    q.push(23);
    q.push(65);
    q.push(123);
    q.push(658);

    //to print all elements
    while(!q.empty())
    {
        cout<<q.front()<<" ";   //to print front element
        q.pop();               //to remove front element so that next element can be in front
    } cout<<endl;


    cout<<"------------\n"<<endl;

    deque<string> p;

    p.push_front("Rajat");
    p.push_back("Sharma");
    p.push_front("Kumar");

    while(!p.empty())
    {
        cout<<p.front()<<" ";
        p.pop_front();
    }

}