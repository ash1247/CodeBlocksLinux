#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s2 = "pi = 3.14";

    double d = stod(s2.substr(s2.find_first_of( "+-.0123456789") ) );
    cout << d << endl;
}
