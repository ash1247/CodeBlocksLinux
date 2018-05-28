#include <iostream>
#include <stdio.h>
#include <memory>
#include <memory.h>

using namespace std;

int &get(int *array, int index)
{
    return array[index];
}

int main()
{
    int ia[10];
    memset(ia, 0, sizeof ia);
    for(int i = 0; i != 10; ++i )
        get(ia, i) = i;
    for(int i = 0; i != 10; ++i )
        cout << ia[i] << endl;
}
