//Graph Practice
//Adjancency list

#include <iostream>
#include <map>
#include <list>
using namespace std;
template <typename T>

class graph
{
    public:
    map<T, list<T> > adj;

    void addEdge(int x, int y, bool direction)
    {
        adj[x].push_back(y);
        if(direction == 0)
        adj[y].push_back(x);
    }

    void printAdj()
    {
        for(auto i:adj)
        {
            cout<<i.first<<" -> ";
            for(auto j:i.second)
            cout<<j<<" ";
        }cout<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of nodes- "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges- "<<endl;
    cin>>m;

    graph<int> g;

    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;

        g.addEdge(x,y,1);
    }

    g.printAdj();
}