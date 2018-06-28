/*Copyright of Ashikul Hosen */

#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::cout << "abada\n";
  std::vector<int> vi;
  vi.push_back(10);
  vi.push_back();
  for (auto it = vi.begin(); it != vi.end(); ++it) {
    std::cout << *it  << "\n";
  }

  return 0;
}
