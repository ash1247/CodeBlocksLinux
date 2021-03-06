/* Copyright of Ashikul Hosen
   Solution of C++ Primer Ex 12.26 */

#include <iostream>
#include <string>
#include <memory>

using std::string; using  std::cin; using  std::cout;
using std::endl;

int main() {
  std::allocator<string> alloc;
  constexpr size_t n = 10;

  auto const p = alloc.allocate(n);
  string s;
  auto q = p;
  while (cin >> s && q != p + n)
    alloc.construct(q++, s);

  const size_t sz = q - p;

  for (auto pos = p; pos != p; ++pos)
    cout << *pos << endl;

  while (q != p)
    alloc.destroy(--q);
  alloc.deallocate(p, n);

  return 0;
}
