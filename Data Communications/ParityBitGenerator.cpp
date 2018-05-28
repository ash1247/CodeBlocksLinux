#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int count = 0;
    string s1;
    cout << "Enter binary string: ";
    cin >> s1;

    for(int i = 0; i < s1.size()-1; i++ )
    {
        if(s1[i] == '1')
            count++;
    }

    printf("The parity bit is %c\n", s1[s1.size()-1] );
    if(count % 2 == 0 & s1[s1.size()-1] == '0')
        printf("The parity bit is OK. There is no error\n");
    else if(count % 2 == 1 & s1[s1.size()-1] == '1')
        printf("The parity bit is OK. There is no error\n");
    else
        printf("The given data contains error\n");

    return 0;
}

