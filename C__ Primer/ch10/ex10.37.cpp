#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main() {
 
    std::vector<int> vi{0,1,2,3,4,5,6,7,8,9};
    
    std::list<int> li(vi.rbegin() + 2, vi.rend() - 3);
    
    for(auto e : li)
        std::cout << e << std::endl;
}
