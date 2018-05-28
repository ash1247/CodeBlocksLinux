#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <set>

using namespace std;

int main()
{
    int n, a, m;
    while( scanf("%d", &n) != EOF )
    {
        bool check = true;

        set<int> s;

        cin >> m;
        for(int i = 0; i < n -1; ++i)
        {
            cin >> a;
            m = abs(m-a);
            s.insert(m);
            m = a;
        }

        if( s.size() != n -1 )
            check = false;
        if( s.count(0) > 0)
            check = false;
        if( s.upper_bound(n-1) != s.end() )
            check = false;

        if(check)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
    return 0;
}
