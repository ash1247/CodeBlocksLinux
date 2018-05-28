#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, n,high,low,a, pre;
    cin >> t;
    for(int j = 1; j <= t; j++)
    {
        high = low = pre = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            if(a > pre & pre != 0)
                high++;
            else if(a < pre & pre != 0)
                low++;

            pre = a;
        }

        printf("Case %d: %d %d\n", j,high, low);
    }
}
