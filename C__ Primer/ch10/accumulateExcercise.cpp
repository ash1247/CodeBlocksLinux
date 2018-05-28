#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    vector<double> vd(10, 2.5);
    vector<char*> vs(10, "HI");
    list<char*> ls(10, "Hi");

    int e = equal(vs.cbegin(), vs.cend(), ls.cbegin() );
    auto sum = accumulate(vd.cbegin(), vd.cend(), 0.0);

    cout << sum << endl;
    cout << e << endl;
    fill(vd.begin(), vd.end(), 10);

    sum = accumulate(vd.cbegin(), vd.cend(), 0.0);
    cout << sum << endl;

    fill_n(vd.begin(), 5, 5);

    sum = accumulate(vd.cbegin(), vd.cend(), 0.0);
    cout << sum << endl;
}
