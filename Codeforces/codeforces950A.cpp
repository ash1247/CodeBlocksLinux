#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, a, r, ans = 0;
    cin >> l >> r >> a;
    if( (l == 0 && a == 0) || (r == 0 && a == 0))
        ans = 0;
    else if( (l + r) % 2 == 0 ) {
        if( a % 2 == 1)
            ans = l + r + a -1;
        else
            ans = l + r + a;
    }
    else if( (l + r) % 2 == 1 ) {
        if( a % 2 == 0)
            ans = l + r + a - 1;
        else
            ans = l + r + a;
    }

    cout << ans << endl;

    return 0;

}

