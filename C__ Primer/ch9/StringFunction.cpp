#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Hello!!";
    const char *cp = "Stately, plump back";
    string s2 = "World!!";
    s.insert( s.size(), 5 , '!');
    s.erase( s.size() -5, 5);
    s.assign(cp, 7);
    s.insert(s.size(), cp + 7);
    s.insert(0,s2);
    s.insert(0, s2, 0, s2.size() );
    cout << s << endl;

    string s1 = "C++ Primer";
    string s3;
    s3 = s1;
    s1.insert( s1.size(), " 4th Ed.");
    s3.append( " 4th Ed.");
    s1.erase(11,3);
    s1.insert(11, "Fifth");
    s3.replace(11,3, "5th");
    cout << s1 << endl;
    cout << s3 << endl;

}


