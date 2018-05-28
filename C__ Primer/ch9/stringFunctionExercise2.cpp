#include <iostream>
#include <string>
#include <iterator>

std::string fixName(const std::string &name,
                    const std::string &prefix,
                    const std::string &suffix)
{
    std::string newName = name;
    std::string pre = prefix + " ";
    newName.insert(newName.begin(), pre.begin(), pre.end());
    return newName.append( " " + suffix);

}

std::string fixName2(const std::string &name,
                    const std::string &prefix,
                    const std::string &suffix)
{
    std::string newName = name;
    std::string pre = prefix + " ";
    std::string suf = " " + suffix;
    newName.insert(newName.begin(), pre.begin(), pre.end());
    newName.insert( newName.end(), suf.begin(), suf.end() );
    return newName;
}

std::string fixName3(const std::string &name,
                    const std::string &prefix,
                    const std::string &suffix)
{
    std::string newName = name;
    std::string pre = prefix + " ";
    std::string suf = " " + suffix;
    newName.insert( 0 , pre);
    newName.insert( newName.size(), suf );
    return newName;
}

int main()
{
    std::string name, prefix, suffix;
    std::cin >> name >> prefix >> suffix;

    std::cout << fixName( name, prefix, suffix ) << std::endl;
    std::cout << fixName2( name, prefix, suffix ) << std::endl;
    std::cout << fixName3( name, prefix, suffix ) << std::endl;

}
