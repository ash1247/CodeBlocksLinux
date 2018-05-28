#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int nPar, budget, hotels, weeks, cost, ab, ans;
    while(scanf("%d %d %d %d",&nPar,&budget,&hotels,&weeks) == 4)
    {
        ans = budget+1;
        for(int i = 1; i <= hotels; i++)
        {
            cin >> cost;
            ab = 0;
            for(int j = 1,x; j <= weeks; j++)
            {
                cin >> x;
                ab = max(ab,x);
            }
            if(ab >= nPar)
                ans = min(nPar*cost, ans);
        }
        if( ans == budget+1)
            printf("stay home\n");
        else
            printf("%d\n", ans);
    }
    return 0;
}
