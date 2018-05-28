#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ia[3][4] = {
                    {0, 1, 2, 3},
                    {4, 5, 6, 7},
                    {8, 9, 10, 11}
                    };

    size_t cnt = 0;
    for(auto &row : ia){
        for(auto col : row) {
            cout << col << " ";
            cnt++;
        }
    }
    cout << endl;

    using int_array = int[4];

    typedef int int_array[4];

    for(int_array *p = ia; p != ia + 3; ++p) {
        for(int *q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
        cout << endl;
    }

    for(auto p = ia; p != ia + 3; p++) {
        for(auto q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
        cout << endl;
    }

    for( auto p = begin(ia); p != end(ia); ++p) {
        for(auto q = begin(*p); q != end(*p); ++q)
            cout << *q << ' ';
        cout << endl;
    }
}
