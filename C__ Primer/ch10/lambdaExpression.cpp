#include <iostream>
#include <string>

using namespace std;

int main()
{
    // lambda takes two parameters and return their sum
    auto sum = [](int a, int b) { return a+b; };

    int a, b;
    std::cin >> a >> b;
    std::cout << a << " + " << b << " = " << sum(a, b) << std::endl;

    //lambda that takes one int and one int from its
    //enclosing function and return their sum
    auto sum2 = [a] (int b) { return a + b; };

    std::cout << a << " + " << b << " = " << sum2(b) << std::endl;

    return 0;
}
