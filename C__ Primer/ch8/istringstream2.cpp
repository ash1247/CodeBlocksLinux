#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    string s;
    ifstream in("ifile.txt");
    vector<string> vs;
    istringstream read;

    while( in >> s )
        vs.push_back(s);

    for(auto s: vs) {
        read >> s;
        cout << s << endl;
    }
}
