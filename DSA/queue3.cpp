//Doubly linked list using STL

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> q;

    q.push_front(90);
    q.push_front(78);
    q.push_back(89);

    cout<<q.front();

    return 0;
}