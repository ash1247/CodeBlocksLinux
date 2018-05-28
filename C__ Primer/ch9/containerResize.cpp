#include <iostream>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main()
{
    list<int> ilist(10, 42);
    ilist.resize(15);
    ilist.resize(25,-1);
    ilist.resize(5);
    ilist.resize(10, 1);

    list<int> li = {0,1,2,3,4,5,6,7,8,9};
    auto iterl = li.begin();
    while (iterl != li.end()) {
        if (*iterl % 2) {
            iterl = li.insert(iterl, *iterl++);
            iterl++;
        } else
            iterl = li.erase(iterl);
    }

    for(auto x : li)
        cout << x << endl;

    cout << endl;
    cout << endl;

    forward_list<int> fli = {0,1,2,3,4,5,6,7,8,9};
    auto iterfl = fli.begin();
    auto itbf = fli.before_begin();
    while (iterfl != fli.end() ) {
        if (*iterfl % 2) {
            itbf = fli.insert_after(itbf, *iterfl);
            itbf++;
            itbf++;
        }
        itbf = iterfl;
        ++iterfl;
    }

    iterfl = fli.begin();
    itbf = fli.before_begin();

    while(iterfl != fli.end() )
    {
        if( *iterfl % 2 == 0)
            iterfl = fli.erase_after(itbf);
        itbf++;
        iterfl++;

    }

    for(auto x : fli)
        cout << x << endl;

    cout << endl;
    cout << endl;

    vector<int> vi{0,1,2};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2)
            iter = vi.insert(iter, *iter++);
        ++iter;
    }

    for(auto x : vi)
        cout << x << endl;

    cout << endl;
    cout << endl;

    for(auto x : ilist)
        cout << x << endl;

    vi.reserve(20);
    cout << endl;
    cout << vi.capacity() << endl;
    cout << vi.size() << endl;
}
