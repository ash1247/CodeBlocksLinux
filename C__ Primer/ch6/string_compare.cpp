#include <iostream>

using namespace std;

bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

string::size_type find_char(const string &s, char c,
                        string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for(decltype(ret) i = 0; i != s.size(); ++i)
    {
        if(s[i] == c){
            if( ret == s.size())
                ret = i;
            ++occurs;
        }
    }
    return ret;
}

bool is_sentence(const string &s)
{
    string::size_type ctr = 0;
    return find_char(s, '.', ctr) == s.size() - 1
    && ctr == 1;
}

int main()
{
    string s;
    char c;
    string::size_type ctr = 0;
    cin >> s >> c;
    auto check = find_char(s, c, ctr);
    auto check2 = is_sentence(s);
    cout << check << endl;
    cout << (check2 == 1? "Given string a sentence.\n" : "Given string is not a sentence.\n") << endl;
}
