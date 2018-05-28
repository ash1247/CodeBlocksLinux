#include <bits/stdc++.h>


using namespace std;

int sum(int n);

int main(void)
{
    int n;
    while(scanf("%d", &n) == 1 , n)
    {
        cout << sum(n) << '\n';
    }
}

int sum(int n)
{
    if(n < 10)
        return n;
    int s = 0;
    while(n) {
        s += n%10;
        n /= 10;
    }
    return sum(s);

}
