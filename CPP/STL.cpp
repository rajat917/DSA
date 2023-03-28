// STL are the libraries which are pre-build so we can use some function like array, stack, vector, etc directly.
#include <iostream>
using namespace std;
#include <array>   //TO use array
#include <vector>
#include <deque>    //Doubly ended queue
#include <list>     // Doubly linked list
#include <stack>
#include <queue>
#include <set>       //same value doesnot print two times 
#include <map>      // data stores in key points
#include <algorithm>

int main()
{
    array<int, 5> a = {1,5,6,7,8};

    int size = a.size();
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"-----------------------\n"<<endl;

    vector<int> v;

    v.push_back(34);
    for(int i=0; i<5; i++)
    v.push_back(i);

    //to print
    for(int i:v)
    cout<<i<<endl;

    cout<<v.capacity()<<endl;      //To check capacity of vector
    cout<<v.size()<<endl;         //To check size of vector

    v.pop_back();         //To remove data
    v.pop_back();
    
    for(int i:v)
    cout<<i<<endl;

    cout<<"----------------\n"<<endl;

    deque<int> d;

    d.push_back(2);
    d.push_front(4);

    for(int i=0; i<3; i++)
    d.push_back(i);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<"All elements- "<<endl;
    for(int i:d)
    cout<<i<<endl;

    d.pop_back();
    d.pop_front();
    cout<<"All elements- "<<endl;
    for(int i:d)
    cout<<i<<endl;
    
    cout<<d.size()<<endl;

    cout<<"--------------------\n"<<endl;

    list<int> l;

    l.push_back(9);
    l.push_front(8);

    for(int i:l)
    cout<<i<<endl;

    l.erase(l.begin());
    for(int i:l)
    cout<<i<<endl;

    list<int> n(5,99);
    for(int i:n)
    cout<<i<<endl;

    cout<<"-----------------\n"<<endl;

    //Max Heap
    priority_queue<int> max;

    //Min Heap
    priority_queue <int, vector<int>, greater<int> > min;

    max.push(5);
    max.push(9);
    int k = max.size();
    for(int i=0; i<k; i++)
    {
        cout<<max.top()<<endl;
        max.pop();
    }

    min.push(8);
    min.push(3);
    min.push(56);
    int j = min.size();
    for(int i=0; i<j; i++)
    {
        cout<<min.top()<<endl;
        min.pop();
    }

    cout<<"-----------------\n"<<endl;

    map<int, string> g;

    g[3] = "Sharma";
    g[1] = "Rajat";
    g[78] = "Kumar";
    g.insert({40, "Mahol"});

    for(auto i:g)
    cout<<i.first<<" "<<i.second<<endl;

    g.erase(78);     //To erase any element
}