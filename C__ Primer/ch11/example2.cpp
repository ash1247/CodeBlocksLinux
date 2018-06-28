/* Copyright of Ashikul Hosen
 Example of C++ Primer Chapter */

#include <iostream>
#include <vector>
#include <map>
#include <string>

int main(int argc, char *argv[]) {
  std::map<std::string, size_t> word_count;
  std::string word;
  while (std::cin >> word) {
    auto ret = word_count.insert({word, 1});
    if (!ret.second)
      ++ret.first->second;
  }

  for (auto it = word_count.cbegin(); it != word_count.cend(); ++it)
    std::cout << it->first << ": " << it->second << "\n";
  return 0;
}

