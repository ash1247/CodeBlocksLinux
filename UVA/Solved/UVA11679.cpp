#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int b, n, d, c, v, check;
    while(scanf("%d %d", &b, &n) && (b||n) )
    {
        check = 0;
        int r[b];
        for(int i=1; i <= b; i++)
            cin >> r[i];

        for(int i=1; i <= n; i++)
        {
            cin >> d >> c >> v;
            r[d] -= v;
            r[c] += v;
        }

        for(int i = 1; i <= b; i++)
        {
            if(r[i] < 0)
            {
                check = 1;
                break;
            }
        }
        if(!check)
            cout << "S\n";
        else
            cout << "N\n";
    }

}
