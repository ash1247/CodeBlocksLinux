#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name("AnnaBelle");
    auto pos1 = name.find("nna");
    cout << pos1 << endl;

    string numbers("0123456789");
    string name1("r2d2");

    auto pos = name1.find_first_of(numbers);
    cout << pos << endl;

    string dept("03714p3q");

    pos = dept.find_first_not_of(numbers);
    cout << pos << endl;

    pos = name1.find_last_of(numbers);
    cout << pos << endl;

    pos = dept.find_last_not_of(numbers);
    cout << pos << endl;

    pos = 0;
    string s("qwer123qwer456qwer123");

    while( (pos = s.find_first_of( numbers, pos) ) != string::npos ) {
        cout << "found number at index: " << pos
        << " element is " << s[pos] << endl;
        ++pos;
    }

    string river("Missipissi");
    auto first_pos = river.find("is");
    auto last_pos = river.rfind("is");

    cout << first_pos << endl;
    cout << last_pos << endl;

}
