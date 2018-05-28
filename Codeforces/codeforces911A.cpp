#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long int n, mini, j = 0, ans;
    cin >> n;

    long int a[n];
    long int mina[n];

    for(int i = 1; i <= n; i++)
    {
        a[i] = i;
        mini = min(a[i], mini);
    }

    for(int i = 1; i <= n; i++)
    {
        if( a[i] == mini)
        {
            mina[j] = i;
            j++;
        }
    }

    sort(mina, mina + j - 1);

    ans = mina[1] - mina[0];

    cout << ans << endl;
}
