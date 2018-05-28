#include <iostream>

using namespace std;

int main()
{
    string s, p,maxs;
    int maxcnt = 0, cnt = 0;
    while(cin >> s)
    {
        if( s == p)
            cnt++;
        else
            cnt = 0;
        if(cnt > maxcnt){
            maxcnt = cnt;
            maxs = s;
        }
        p = s;
    }

    cout << maxs << " appeared maximum " << maxcnt+1 << " times.\n";
}
