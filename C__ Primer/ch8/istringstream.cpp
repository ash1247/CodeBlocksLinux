#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<PersonInfo> people;
    ofstream out("file.txt", ofstream::app);

    while( getline(cin, line) ) {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }

    out << "Name\tNumber\n";
    out << endl;
    for(auto s : people ) {
        out << s.name << "\t";
        for( auto p : s.phones)
            out << p << " ";
        out << "\n";
    }
    out << "\n";
    out.close();
}
