#include <iostream>
#include <ctype.h>

using namespace std;

bool contain_capital(char &c)
{
    if( isupper(c) )
      return true;
    return false;
}

void make_lowercase( string &s )
{
    for( int i = 0; i != s.size(); ++i )
    {
        if( contain_capital( s[i] ) ) {
            s[i] = tolower( s[i] );
        }
    }
}
int main()
{
    string s;
    cin >> s;
    make_lowercase(s);
    cout << s << endl;

}
