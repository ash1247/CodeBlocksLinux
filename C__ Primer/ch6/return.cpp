#include <iostream>

using namespace std;

string make_plural(size_t ctr, const string &word,
                        const string &end)
{
    return (ctr > 1) ? word + end : word;
}

const string &shortestString(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

const string &manip()
{
    string ret;
    if(!ret.empty() )
        return ret;
    else
        return ret;
}

char &get_val(string &str, string::size_type ix)
{
    return str[ix];
}
int main()
{
    string word, end;
    int i;
    cin >> i >> word >> end;
    cout << make_plural(i, word, end) << endl;
    cout << shortestString(word,end) << endl;
    auto sz = shortestString(word,end).size();
    cout << sz << endl;
    get_val(word, 0) == 'A';
    cout << word << endl;
}
