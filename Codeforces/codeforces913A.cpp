#include <bits/stdc++.h>

using namespace std;


int main() {

  int n, m, ans;
  scanf("%d%d", &n, &m);

  if( n > 27)
        ans = m;
   else
        ans = m % (int)pow(2,n);
  printf("%d\n", ans);

  return 0;
}
