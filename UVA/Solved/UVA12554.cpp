#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, flag = 0,end = 0;
    cin >> n;
    string s[16]={"Happy", "birthday", "to", "you",
                    "Happy", "birthday", "to", "you",
                    "Happy", "birthday", "to", "Rujia",
                    "Happy", "birthday", "to","you"};
    string a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0, j = 0;
    while(true) {
        cout << a[i] << ": " << s[j] << "\n";
        if(i == n-1)
            flag = 1;
        if(j == 15 && flag)
            break;
        i++,
        j++;
        if(i >= n)  i = 0;
        if(j >= 16) j = 0;
    }
    return 0;
}
