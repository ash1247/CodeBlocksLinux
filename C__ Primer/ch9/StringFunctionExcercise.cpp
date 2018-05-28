#include <iostream>
#include <string>

using namespace std;

void stringReplace( string &s, const string &oldVal, const string &newVal)
{
    for( auto it = s.begin(); it < s.end() - oldVal.size() + 1; ) {
        auto it2 = oldVal.cbegin();
        for( auto it3 = it; it2 != oldVal.cend(); ++it2, ++it3 )
            if( *it3 != *it2 )
                break;
        if( it2 == oldVal.cend() ) {
            string::size_type pos = it - s.begin();
            s.erase(pos, oldVal.size()  );
            s.insert( pos, newVal );
            it = s.begin() + pos + newVal.size();
        } else
            ++it;
    }
}

void replaceStr( string &s, const string &oldVal, const string &newVal)
{
    for(string::size_type pos = 0; pos < s.size(); ) {
        if(s.substr(pos, oldVal.size()) == oldVal ){
            s.replace( pos, oldVal.size(), newVal);
            pos += newVal.size();
        }else
            ++pos;

    }
}

int main()
{
    std::string s{"r u ok?\ngo thru\ntho tho altho\nthrough thruu"};

    std::cout << "Old:\n" << s << std::endl;
    stringReplace(s, "tho", "though");
    std::cout << "\nNew:\n" << s << std::endl;
    stringReplace(s, "thru", "through");
    std::cout << "\nNew:\n" << s << std::endl;
    stringReplace(s, "hl", "hello");
    std::cout << "\nNew:\n" << s << std::endl;
    stringReplace(s, "u", "you");
    std::cout << "\nNew:\n" << s << std::endl;

}
