/* Copyright of Ashikul Hosen
   Solution of C++ Primer 12.23 */

#include <iostream>
#include <string>
#include <cstring>

int main() {
  const char *c1 = "Hello";
  const char *c2 = "World";
  char *c3 = new char[strlen(c1) + strlen(c2) + 1];
  strcpy(c3, c1);
  strcat(c3, c2);
  std::cout << c3 << std::endl;
  delete [] c3;

  std::string s1("Hello");
  std::string s2("World");
  std::string s3 = s1 + s2;
  std::cout << s3 << std::endl;

  return 0;
}
