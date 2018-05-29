#include <iostream>
#include <map>
#include <list>

int main() {
    
    std::map<std::string, std::list<int>> 
        words{{"ghi", {100, 200}}, {"abc", {1, 3, 5}}, {"def", {2, 4}}};
    
    for(const auto &w : words) {
            std::cout << w.first << std::endl;
        for(const auto &l : w.second )
            std::cout << " " << l;
        std::cout << std::endl;
    }
}
