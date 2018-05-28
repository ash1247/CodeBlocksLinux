#include <iostream>
#include <vector>

int main()
{
    unsigned a = 1024;
    int aa[4*7-14];
    std::vector<int> marks;
    std::vector<int> result(11,0);
    int i;

    while(std::cin >> i)
        marks.push_back(i);

    for(auto it = marks.begin(); it != marks.end(); it++)
        if(*it <= 100) {
            i = *it/10;
            auto it2 = result.begin();
            *(it2 + i) = *(it2 + i)+1;
    }
    for(auto x : result)
        std::cout << x << " ";
}
