#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, count = 0;
    cin >> n >> a >> b;

    a -= 1;
    b -= 1;

    unordered_map<int, int> umii;

    for(int i = 0; i < n; ++i)
        umii.insert({ i , 1});

    while( a != b)
    {
        cout << 1 << endl;
        n /= 2;
        count++;
    }

    for( auto x : umii)
        cout << x.first << " " << x.second << endl;

    if(n == 1)
        cout << "Final!\n";
    else
        cout << count << endl;
    return 0;

}

