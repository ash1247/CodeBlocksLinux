#include <bits/stdc++.h>


using namespace std;

int main(void)
{
    int t, n, y1, y2, check, diff;
    cin >> t;
    while(t--){
        check = 0;
        diff = 0;
        cin >> n;
        cin >> y1 >> y2;
        diff = y1-y2;
        for(int i = 1; i < n; i++)
        {
            cin >> y1 >> y2;
            if(diff != y1-y2)
                check = 1;
        }
        if(check == 1)
            printf("no\n");
        else
            printf("yes\n");

        if(t)
        {
            printf("\n");
        }
    }
}
