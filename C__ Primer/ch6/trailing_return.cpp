#include <iostream>

using namespace std;

auto func(int i) -> int(*)[10];
int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

decltype(odd) *arrPtr(int i)
{
    return ( i%2 ) ? &odd : &even;
}

int (&ret(int i) )[5]
{
    return ( i%2 ) ? odd : even;
}

int main()
{

}
