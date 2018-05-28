#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    string s;
    ifstream in("ifile.txt");
    vector<string> vs;

    while(getline(in, s) )
        vs.push_back(s);

    for(auto s : vs)
        cout << s << endl;

    in.close();

}
