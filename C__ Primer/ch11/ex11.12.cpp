#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <algorithm>
#include <utility>
#include <string>

int main() {
    typedef std::pair<std::string, int> psi;
    std::vector<psi> vp;

    std::string s;
    int i;
    while(std::cin >> s >> i)
        vp.push_back({s, i});
//         vp.push_back(std::make_pair(s, i));
//         vp.push_back(std::pair<std::string, int>(s, i));
        
    
    for( const auto &p : vp)
        std::cout << p.first << " " << p.second << std::endl;
}
