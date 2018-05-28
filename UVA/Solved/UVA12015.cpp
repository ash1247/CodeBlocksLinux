
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t,a, high;
    string s;
    cin >> t;
    multimap<int, string> mm;
    for(int j = 1; j <= t; j++)
    {
        high = 0;
        for(int i = 1; i <= 10; i++)
        {
            cin >> s >> a;
            if( a > high)
                high = a;
            mm.insert(pair<int,string> (a, s) );
        }
        printf("Case #%d:\n", j);
        for(const auto& n: mm)
            if(n.first == high)
                cout << n.second << endl;

        mm.clear();
    }
    return 0;
}
