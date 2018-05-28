#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

int main()
{
    std::vector<int> vi;
    for(int i; std::cin >> i; vi.push_back(i)) { }
    std::list<int> li;
    std::sort(vi.begin(), vi.end() );
    std::unique_copy(vi.begin(), vi.end(), std::back_inserter(li));
    std::for_each(li.begin(), li.end(),
            [](int i) { std::cout << i << " ";});

    return 0;
}
