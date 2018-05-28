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

    for(const auto &entry : people) {
        ostringstream formatted, badNums;
        for(const auto &nums : entry.phones) {
            if( !isspace(nums) ) {
                badNums << " " << nums;
            } else
                formatted << " " << formatted(nums);
        }
        if(badNums.str().empty() )
            os << entry.name << " "
                << formatted.str() << endl;
        else
            cerr << "input error: " << entry.name
                << " invalid number(s) " << badNums.str()
                << endl;
    }
}
