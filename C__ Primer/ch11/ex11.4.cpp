#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include <set>

std::string trim_string(std::string s) {
    
    const char *punctuations = "\"'`:*-_;,.?!()[]{}";
    for(auto &c : s)
        if( c >= 'A' && c <= 'Z')
            c -= 'A' - 'a';
        
    size_t bg = s.find_first_not_of(punctuations);
    if(bg == std::string::npos)
        return "";
    
    size_t ed = s.find_last_not_of(punctuations);
    return s.substr(bg, ed - bg + 1);
}

std::map<std::string, size_t> 
                count_words(std::vector<std::string> &words) {
    std::map<std::string, size_t> counts;
    for(const auto &w : words)
        ++counts[trim_string(w)];
    return counts;
}

int main() {
    std::string filename;
    std::cin >> filename;
    
    std::ifstream in(filename);
    
    if( !in.is_open() ) {
        std::cerr << "Cannot open file" << filename << std::endl;
        return -1;
    }
    std::istream_iterator<std::string> i_iter(in), eof;
    std::vector<std::string> words(i_iter, eof);
    for(const auto &w : words)
        std::cout << w << std::endl;
    
    auto counts = count_words(words);
    
    for(const auto &w : counts)
        std::cout << w.first << " occurs " << w.second
                <<( (w.second > 1) ? " times" : " time") 
                    << std::endl;
    
    return 0;
    
}
