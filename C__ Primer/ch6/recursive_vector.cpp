#include <iostream>
#include <memory.h>
#include <vector>
using namespace std;

int print(vector<int> v, int index)
{
    if(index >= 1)
    {
        print(v, index - 1);
        cout << v[index-1] << endl;
    }
    return 1;
}

int main()
{
    vector<int> v(10,1);
    v[0] = 10;
    v[9] = 11;
    print(v, 10);
}

