#include <bits/stdc++.h>

using namespace std;
int main(void)
{
    int s,n;
    cin >> s;
    cin >> n;
    cout << (s%n) << endl; //modulus by bitmasking
    cout << (s&(n-1)) << endl;

    if((s&(s-1))==0) //check is s is power of 2
        cout << (s&(s-1)) << endl;

    cout << (s&(s-1)) << endl; //turn off the last 1 in binary

    cout << (s|(s+1)) << endl; //turn on the last zero in binary

    cout << (s&(s+1)) << endl; //turn off the last consecutive 1 in binary

    cout << (s|(s-1)) << endl; //turn on the last consecutive 0 in binary


}
