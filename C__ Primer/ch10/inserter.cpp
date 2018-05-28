#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi;
    auto it = back_inserter(vi);
    *it = 10;
    fill_n(back_inserter(vi), 10, 0 );

    for(auto x : vi)
        cout << x << endl;
}
