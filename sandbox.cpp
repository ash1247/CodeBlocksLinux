#include <iostream>
#include <vector>

int main()
{
    int n, sum = 0;
    while(std::cin >> n)
    {
        sum += n;
    }

    std::cout << sum << std::endl;
}
