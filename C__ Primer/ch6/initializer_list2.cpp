#include <iostream>
#include <initializer_list>
using namespace std;

int initializer_add(initializer_list<int> ili)
{
    int sum = 0;
    for( auto i = ili.begin(); i != ili.end(); ++i )
        sum += *i;
    return sum;
}



int main()
{
    int a;
    initializer_list<int> ili = {0,1,2,3,4,5,6,7,8,9,10};

    int b = initializer_add(ili);

    cout << b << endl;
}
