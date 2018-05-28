
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t,a,pre, high, low;
    cin >> t;
    int check[t];
    for(int j = 1; j <= t; j++)
    {
        high = low = pre = 0;
        for(int i = 1; i <= 10; i++)
        {
            cin >> a;
            if(a > pre & pre != 0)
                high = 1;
            else if(a < pre & pre != 0)
                low = 1;
            pre = a;
        }
        if(high == 1 ^ low == 1)
            check[j] = 1;
        else
            check[j] = 0;
    }

    printf("Lumberjacks:\n");
    for(int i = 1; i <= t ; i++)
    {
        if(check[i] == 1)
            cout << "Ordered\n";
        else
            cout << "Unordered\n";
    }
}
