#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, n, a, x;
    cin >> t;
    for(int j = 1; j <= t; j++)
    {
        a = x = 0;
        cin >> n;
        char cmd[30];
        int in[n];
        for(int i = 1; i <= n; i++)
        {
            scanf("%s", cmd);
            if(cmd[0] == 'L') {
                in[i] = -1;
                x--;
            }
            else if(cmd[0] == 'R') {
                in[i] = 1;
                x++;
            }
            else
            {
                scanf("%*s %d", &a);
                in[i] = in[a];
                x += in[a];
            }
        }

        cout << x << endl;
    }

}
