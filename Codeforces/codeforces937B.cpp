#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, y, ans = 0;

    cin >> p >> y;

    while(y > p)
    {   bool check = 0;
        for(int i = 2; i <= sqrt(y); i++)
            if(y % i == 0 && i <= p){
                check = 1;
                break;
            }
        if(!check) {
            ans = y;
            break;
        }
        y--;
    }
    if(!ans)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}
