#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <numeric>
#include <string>

using namespace std;

int main()
{
    vector<int> vi(10,2);
    list<int> li(10,2);

    list<string> ls(10,"Hi");

    vi[9] = 1;

    auto result = find(vi.cbegin(), vi.cend(), 1);
    auto result2 = count(vi.cbegin(), vi.cend(), 2);
    auto result3 = count(ls.cbegin(), ls.cend(), "Hi");
    int sum = accumulate(vi.cbegin(), vi.cend(), 0);
    string con = accumulate(ls.cbegin(), ls.cend(), string("") );
    auto e = equal(vi.cbegin(), vi.cend(), li.begin() );

    cout << *result << endl;
    cout << result2 << endl;
    cout << result3 << endl;
    cout << sum << endl;
    cout << con << endl;
    cout << e << endl;
}
