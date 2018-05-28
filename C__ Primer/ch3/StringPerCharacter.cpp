#include <iostream>

using namespace std;

int main(void)
{
    int sz = 0;

    string str("some string");

    for(auto c : str)
        cout << c << endl;

    string s("Hello!!world!!!");

    decltype(s.size()) punct_cnt = 0;

    for(auto &c : s)
        if(ispunct(c)) {
            ++punct_cnt;
            c = ' ';
        }
    cout << punct_cnt << " punctuation characters in " << s << endl;
    cout << s << endl;

    for( decltype(s.size()) i = 0; i != s.size()
        && !isspace(s[i]); ++i )
        s[i] = toupper(s[i]);

    cout << s << endl;
}
