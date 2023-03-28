// Hashmaps using STL
//To store data like array but it is much quicker to search and it does not store duplicate keys

#include <iostream>
#include <map>       // To print all the elements in order
#include <unordered_map>     //Elements printed will be unordered/random.
using namespace std;

int main()
{
   /* //Creation
    unordered_map <string, int> m;

    //insertion
    pair<string,  int> p = make_pair ("My", 3);
    m.insert(p);

    pair<string, int> p2("name is", 2);
    m.insert(p2);

    m["Rajat"] = 1;

    //Search the position of element
    cout<<m.at("name is")<<endl;
    cout<<m["Rajat"]<<endl;

    //size
    cout<<"The size is "<<m.size()<<endl;

    //erase or remove any element
    m.erase("Rajat");

    //iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end())
    {
        cout<<it -> first <<" "<< it -> second<<endl;
        it++;
    }  
    */

    map<int, int> n;

    pair<int, int> p1(23, 1);
    n.insert(p1);

    pair<int, int> p2(78, 2);
    n.insert(p2);
    
    pair<int, int> p3(56, 3);
    n.insert(p3);

    cout<<n.at(23)<<endl;
    cout<<"The size is- "<<n.size()<<endl;

    //erase
    n.erase(56);

    //to print all elements
    map<int, int> :: iterator it = n.begin();
    while(it != n.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
}