/* Copyright of Ashikul Hosen
   Excercise 11.33 from C++ Primer */
#include <iostream>
#include <map>
#include <iterator>
#include <string>
#include <fstream>
#include <sstream>

typedef std::map<std::string, std::string> trans_type;

trans_type build_map(std::istream &dict) {
  trans_type trans;
  std::string abbr, expr;
  while (dict >> abbr && std::getline(dict, expr))
    if (expr.size() > 1)
      trans[abbr] = expr.substr(1);
    else
      std::cerr << "Error: No rule for " << abbr << std::endl;
  return trans;
}

const std::string &transform(const std::string &s, const trans_type &trans) {
  auto it = trans.find(s);
  if (it != trans.end())
    return it->second;
  else
    return s;
}

void word_transform(std::istream &dict, std::istream in,
                    std::ostream &out) {
  auto trans_map = build_map(dict);
  std::string line;
  while (std::getline(in, line)) {
    std::istringstream iss(line);
    std::string word;
    bool firstword = true;
    while (iss >> word) {
      if (firstword)
        firstword = false;
      else
        out << " ";
      out << transform(word, trans_map);
    }
    out << "n";
  }
}

int main(int argc, char *argv[]) {
  std::string inp, outp;
  std::cin >> inp >> outp;
  std::ifstream in_dict(inp);
  std::ifstream in(inp);
  std::ofstream out(outp);
  word_transform(in_dict, in, out);
  return 0;
}
