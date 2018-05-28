#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,10};

    int *p = arr;
    int *p1 = arr;
    int *p2 = arr;

    p1 += p2 - p1;

    cout << *p1 << endl;

    cout << *(p+4) << endl;

    auto n= end(arr) - begin(arr);
    const int sz = 5;
    int *b = arr, *e = arr+sz;
    while( b < e)
    {
        *b = 0;
        ++b;
    }

    for(int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << n << endl;

    p2 = arr + 10;

    cout << p2 << endl;

}
