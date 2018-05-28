#include <bits/stdc++.h>

int main(void)
{
    int a, b, sol1, sol2;
    while(scanf("%d %d", &a, &b))
    {
        if(a==-1 & b==-1)
            break;
        if(a > b)
        {
            sol1 = a-b;
            sol2 = b-a+100;
        }
        else
        {
            sol1 = b-a;
            sol2 = a-b+100;
        }
        printf("%d\n", sol1 < sol2 ? sol1:sol2 );
    }

}
