#include <iostream>
#include <vector>
#include <list>
#include <array>

using namespace std;

int main()
{
    list<string> names;
    vector<const char*> oldstyle;

    names.assign(oldstyle.cbegin(), oldstyle.cend() );
    names.assign(10,"Hiya!");

    vector<string> svec1(10,"1");
    vector<string> svec2(24,"2");

    swap(svec1, svec2);
    for(auto x : svec1)
        cout << x << endl;
    for(auto x : svec2)
        cout << x << endl;

}
