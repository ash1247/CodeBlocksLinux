#include <iostream>

int main()
{
    int n;
    auto isZero = [&n] { return n > 0 ? --n, false : true; };

    std::cin >> n;

    while(!isZero() )
        std::cout << n << std::endl;
    isZero();
    std::cout << n << std::endl;

    return 0;
}
