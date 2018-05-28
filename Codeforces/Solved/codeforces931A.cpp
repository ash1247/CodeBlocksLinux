#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, dif, total = 0, i = 0;
    cin >> a >> b;

    dif = abs(a-b);

    for(i = 1; i <= (int)ceil((float)dif/2); i++)
    {
        total += i;
    }
    for(i = 1; i <= (dif/2); i++)
    {
        total += i;
    }

    cout << total << endl;

    return 0;

}
