#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int *e = &arr[10];
    int *beg = begin(arr);
    int *last = end(arr);

    vector<int> subVec(begin(arr), end(arr));
    vector<int> subVec2(arr+1, arr+6);
    while( beg != last && *beg >= 0)
        cout << beg++ << endl;

    for(auto& x: subVec)
        cout << x << endl;
    cout << endl;
    for(auto& x: subVec2)
        cout << x << endl;
    cout << endl;
    for( int *b = arr; b != e; b++ )
        cout << *b << endl;
}

