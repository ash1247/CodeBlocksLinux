/* Copyright of Ashikul Hosen
   Solution of C++ Primer Ex 12.24 */

#include <iostream>

int main() {
  std::cout << "Input string length: ";
  size_t len;
  std::cin >> len;
  std::cin.ignore();
  char *ca = new char[len + 1];
  std::cin.get(ca, len + 1);
  std::cout << "The input string is: " << ca << std::endl;

  return 0;
}
