#include <vector>
#include <string>
#include <iterator>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <set>

void elimDups(std::vector<std::string> &words) {
    
    std::set<std::string> unique_words(words.begin(), words.end());
    words.clear();
    std::copy( unique_words.begin(), unique_words.end(), 
               std::back_inserter(words) );
}

int main() {
    std::string filename;
    std::cin >> filename;
    std::ifstream in(filename);
    if (!in.is_open()) {
        std::cerr << "Cannot open file: " << filename << std::endl;
        return -1;
    }
    std::istream_iterator<std::string> i_iter(in), eof;
    std::set<std::string> words(i_iter, eof);
//     for (const auto &w : words)
//         std::cout << w << std::endl;
//     std::cout << "\nAfter remove duplicates:\n";
//     elimDups(words);
    for (const auto &w : words)
        std::cout << w << std::endl;

    return 0;
}
