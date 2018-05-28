#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

int main() {

    std::vector<int> li{0,1,2,3,4,5,6,7,8,9,0};
    
    auto zero = std::find( li.crbegin(), li.crend(), 0 );
    std::cout << "The last " << *zero << " in the vector is in position " 
                << zero.base() - li.cbegin() - 1 << std::endl;
}
