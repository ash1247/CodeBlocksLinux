#include <iostream>
#include <istream>
#include <ostream>

using namespace std;

int main()
{
    auto old_state = cin.rdstate();
    cin.clear();
    process_input(cin);
    cin.setstate(old_state);
    cin.clear(cin.rdstate() & ~cin.failbit & ~cin.badbit);
    cin.tie(&cout);
    ostream *old_tie = cin.tie(nullptr);
    cin.tie(&cerr);
    cin.tie(old_tie);
}
