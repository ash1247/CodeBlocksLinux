#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int count = 0;
    string s1,s2, s3;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter two string (" << s1.size() << " character size): ";
    cin >> s2;

    s3 = s1;

    for(int i = 0; i < s1.size(); i++ )
    {
        if(s1[i] != s2[i]){
            s3[i] = '1';
            count++;
        }
        else
            s3[i] = '0';
    }
    cout << "Changed string is "<< s3 << endl;
    cout << "Humming distance is " << count << endl;

    return 0;
}
