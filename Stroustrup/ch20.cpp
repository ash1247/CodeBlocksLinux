#include <regex>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    istream in{"s.txt"};
    if(!in) cerr << "no file\n";

    regex pat {R"(\w{2}\s*\d{5}(-\d{4}})?)"};

    int lineno = 0;
    for(string line; getline(in,line);) {
        ++lineno;
        smatch matches;
        if(regex_search(line,matches,pat))
            cout << lineno << ": " << matches[0] << '\n';
    }

}
