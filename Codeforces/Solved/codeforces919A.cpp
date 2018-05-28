#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    double a, b;
    double minn = INT_MAX;

    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        minn = min(minn, (a/b));
    }

    printf("%.10lf\n", (double)m * minn);

    return 0;
}
