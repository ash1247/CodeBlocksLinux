#include <iostream>

void swap(int *p, int *q);
void swap2(int &p, int &q);
void reset(int &i);
size_t count_calls();

int main()
{
    int a, b;
    std::cin >> a >> b;
    swap(&a, &b);
    std::cout << a << " " << b << std::endl;
    swap2(a, b);
    std::cout << a << " " << b << std::endl;
    reset(a);
    std::cout << a << std::endl;
    std::cout << count_calls() << std::endl;
    std::cout << count_calls() << std::endl;
    std::cout << count_calls() << std::endl;
}

size_t count_calls()
{
    static size_t ctr = 0;
    return ++ctr;
}
void reset(int &i)
{
    i = 0;
}
void swap(int *p, int *q)
{
    int r = *p;
    *p = *q;
    *q = r;
}

void swap2(int &p, int &q)
{
    int r = p;
    p = q;
    q = r;
}
