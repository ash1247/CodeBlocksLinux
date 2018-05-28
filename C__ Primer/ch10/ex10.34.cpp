#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

int main() {

    //ex 10.34
    std::vector<int> vi;

    for(int i = 0; i < 100; i++)
        vi.push_back(i);

    for(auto it = vi.crbegin(); it != vi.crend(); it++)
        std::cout << *it << std::endl;

    //ex 10.35
    
    for(auto it = vi.cend() - 1; it != vi.cbegin() - 1; it--)
        std::cout << *it << std::endl;



}


/*
int main() {

    std::string line = "fioafhdjkals,dfiaohkanf,adiojfkl.";
    auto comma = find( line.cbegin(), line.cend(), ',');
    std::cout << std::string( line.cbegin(), comma ) << std::endl;

    auto rcomma = find( line.crbegin(), line.crend(), ',');
    std::cout << std::string( line.crbegin(), rcomma ) << std::endl;
    std::cout << std::string( rcomma.base(), line.cend() ) << std::endl;
}
*/
