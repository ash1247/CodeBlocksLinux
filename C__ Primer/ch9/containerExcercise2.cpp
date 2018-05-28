#include <iostream>
#include <deque>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    int n;

    list<int> li;
    list<int>::iterator it = li.begin();

    deque<int> di1;
    deque<int> di2;

    for(int i = 0; i != 10; i++)
        li.push_back(i);

    for( it = li.begin(); it != li.end(); ++it)
    {
        if(*it % 2 == 0)
            di1.push_back(*it);
        else
            di2.push_back(*it);
    }

    for(auto x : li )
        cout << x << endl;
    cout << endl;

    for(auto x : di1 )
        cout << x << endl;
    cout << endl;

    for(auto x : di2 )
        cout << x << endl;
    cout << endl;
}
