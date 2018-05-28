#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

int main()
{
    list<char *> ls(10,"1");
    vector<string> vs;
    vector<string> vs2(10, "1");

    vs.assign(ls.begin(), ls.end()) ;

    cout << (ls == vs2) << endl;

    for(auto x : vs)
        cout << x << endl;
}
