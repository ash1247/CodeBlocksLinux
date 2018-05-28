#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(void)
{
    string s;
    ifstream in("ifile.txt");
    vector<string> vs;

    while(getline(in, s) )
        vs.push_back(s);

    ofstream out("ifile1.txt");
    ofstream out2("ifile2.txt", ofstream::out);
    ofstream out3("ifile3.txt", ofstream::out | ofstream::trunc);
    ofstream out4("ifile4.txt", ofstream::app );
    ofstream out5("ifile5.txt", ofstream::out | ofstream::app);
    cin >> s;

    for(auto s : vs)
        out5 << s << endl;

    out.close();
    out2.close();
    out3.close();
    out4.close();
    out5.close();
}
