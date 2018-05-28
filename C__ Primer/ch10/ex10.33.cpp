#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
#include <algorithm>

int main() {

    std::ifstream in("a.txt");
    std::ofstream odd_out("b.txt", std::ofstream::app);
    std::ofstream even_out("c.txt", std::ofstream::app);

    std::istream_iterator<int> i_iter(in), eof;
    std::ostream_iterator<int> odd_iter(odd_out, " "), even_iter(even_out, "\n");
    std::for_each(i_iter, eof,
            [&](int i) { i % 2 ? odd_iter = i: even_iter = i; });

    return 0;
}
