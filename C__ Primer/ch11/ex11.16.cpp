/* Copyright of Ashikul Hosen
 Solution of C++ Primer Exercise 11.15
*/

#include <iostream>
#include <vector>
#include <map>
#include <string>

int main(int argc, char *argv[]) {
  std::map<int, int> mii;
  int a, b;
  while (std::cin >> a >> b) {
    auto it = mii.find(a);
    if (it != mii.end() )
      it->second = b;
    else
      mii.insert({a, b});
  }

  for (auto it : mii) {
    std::cout << it.first << ": " << it.second << std::endl;
  }
  return 0;
}
