#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    list<int> li(10,35);
    vector<int> vi;

    for(auto x: li)
        cout << x << endl;

    cout << endl;

    //replace(li.begin(), li.end(), 35, 42);
    replace_copy(li.cbegin(), li.cend(),
                    back_inserter(vi), 35, 42);

    for(auto x: vi)
        cout << x << endl;

    vector<int> vec();
    vec.reserve(10);
    fill_n(vec.begin(), 10, 0);

    for(auto x: vec)
        cout << x << endl;

    return 0;
}
