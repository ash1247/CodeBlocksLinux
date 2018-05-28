#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s("some string");
    vector<int> vi(10,10);
    if(s.begin() != s.end() ) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    vector<string> v{"aw", "awz", "awa", "awe"};
    for(auto it = s.begin(); it != s.end() && !isspace(*it)
            ; it++)
            *it = toupper(*it);

    for(auto it = vi.begin(); it != vi.end(); it++)
            *it = *it * *it;

    for( auto x : vi)
        cout << x << endl;
    for(auto it = v.begin(); it != v.end() && !it->empty()
            ; it++) {
    //(*it).empty is equivalnent to !it->empty
            transform( (*it).begin(), (*it).end(), (*it).begin(), ::toupper);
            cout << *it << endl;
    }

    cout << s << endl;
}
