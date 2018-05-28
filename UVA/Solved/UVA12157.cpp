#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, n, a, costm, costj;
    double perm, perj;
    cin >> t;
    for(int j = 1; j <= t; j++)
    {
        costm = costj = perm = perj = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a;
            perm = (double)a / 30;
            perj = (double)a / 60;
            if( a % 30 == 0)
                perm += 1;
            if(a% 60 == 0)
                perj += 1;
            costm += ceil(perm) * 10;
            costj += ceil(perj) * 15;

        }
        printf("Case %d: ", j);
        if(costm < costj)
            printf("Mile %d\n", costm);
        else if(costj < costm)
            printf("Juice %d\n", costj);
        else
            printf("Mile Juice %d\n", costm);

    }
    return 0;
}

