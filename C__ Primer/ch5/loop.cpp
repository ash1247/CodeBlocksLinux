#include <iostream>
#include <stdexcept>
#include <math.h>
using namespace std;

int main()
{
    string s;
    int m;
    getline(cin, s);
    for( decltype(s.size()) i = 0; i != s.size();
            ++i ){
            if( isspace(s[i]) )
                throw runtime_error("Word cannot contain spaces");
            s[i] = toupper(s[i]);
    }
    cout << s << endl;

    try{
        while(cin >> m){
            m = pow(m,m);
            cout << m <<endl;
        }
    } catch( exception err)
      {
            cout << err.what()
                << "\nTry Again? Enter y and n" << endl;
            char c;
            cin >> c;
            if( !cin || c == 'n')
                ;
      }

}

