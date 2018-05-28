#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void addAfter(forward_list<string> &flst, string sear, string add)
{
    int check = 0;
    auto it = flst.begin();
    auto prev = flst.before_begin();
    while( it != flst.end() )
    {
        if( *it == sear) {
            flst.insert_after(it, add);
            check = 1;
        }
        prev = it;
        ++it;
    }

    if( check == 0)
        flst.insert_after(prev, add);
}

int main()
{
    forward_list<string> flst(10, "Hi");
    flst.insert_after( flst.before_begin(), "HIII");
    addAfter(flst, "Hi", "Die");

    for(auto x : flst)
        cout << x << endl;
}
