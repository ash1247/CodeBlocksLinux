#include <iostream>
#include <string>

void findAllStr_v1(const std::string &s,
                const std::string &s2)
{
    std::string::size_type pos = 0;
    while( (pos = s.find_first_of(s2,pos) ) != std::string::npos )
    {
        std::cout << "find characters " << s[pos] << " at " << pos << std::endl;
        ++pos;
    }
}

void findAllStr_v2( const std::string &s, const std::string &s2 )
{
    std::string::size_type last_pos = 0;
    std::string::size_type pos = 0;
    while( (pos = s.find_first_not_of(s2, pos) ) != std::string::npos )
    {
        for(auto i = last_pos; i != pos; ++i)
            std::cout << "Find characters " << s[i] << " at " << i << std::endl;
        last_pos = ++pos;
    }
    for( auto i = last_pos; i != s.size(); ++i  )
        std::cout << "Find character " << s[i] << " at " << i << std::endl;
}

void searchStr(const std::string &s)
{
    const std::string numbers{"0123456789"};
    const std::string alphabets{"abcdefghijklmnopqrstuvwxyz"
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    std::cout << "First version\n";
    std::cout << "Search string " << s << " for numeric characters:\n";
    findAllStr_v1(s, numbers);

    std::cout << "Search string " << s << " for alphabetic characters:\n";
    findAllStr_v1(s, alphabets);

    std::cout << "\nSecond Version\n";
    std::cout << "Search string " << s << " for alphabetic characters:\n";
    findAllStr_v2(s, numbers);
    std::cout << "Search string " << s << " for alphabetic characters:\n";
    findAllStr_v2(s, alphabets);

}


int main()
{
    std::string s("ab2c3d7r4e6");
    searchStr(s);
    std::cout << std::endl;

    return 0;

}
