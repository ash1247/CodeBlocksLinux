#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int a1[] = {0,1,2,3,4,5,6,7,8,9};

    int a2[sizeof(a1) /sizeof(*a1)];

    auto ret = copy(begin(a1), end(a1), a2);
}
