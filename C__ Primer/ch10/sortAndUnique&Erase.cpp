#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end() );

    auto end_unique = unique(words.begin(), words.end() );

    words.erase(end_unique, words.end() );
}

int main()
{
    vector<string> vs;

    vs.push_back("the");
    vs.push_back("red");
    vs.push_back("fox");
    vs.push_back("jumps");
    vs.push_back("over");
    vs.push_back("quick");
    vs.push_back("red");
    vs.push_back("slow");
    vs.push_back("the");
    vs.push_back("turtle");

    elimDups(vs);

    stable_sort(vs.begin(), vs.end(), isShorter );

    for(auto x : vs )
        cout << x << endl;

}
