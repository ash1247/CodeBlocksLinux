#include<bits/stdc++.h>

using namespace std;

int main(void){

    int h, m, x, y=0;
    cin >> x >> h >> m;
    while(true)
    {
        if(m <= 00)
        {
            m += 60;
        }
        if(h%10==7 || (h/10)%10==7 || m%10==7 || (m/10)%10==7){
            break;
        }
        m -= x;
        if(m <= 00)
        {
            h -= 1;
        }
        if(h <= 00)
        {
            h += 24;
        }
        y++;
    }

    cout << y << endl;

}
