#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    while(cin >> num){
        cout << ( (num >= 75) ? "high pass" : (num < 60) ? "fail" : "low pass");
        cout << endl;
    }

    int quiz1 = 0;
    cout << (3 || 7) << endl;
    quiz1 |= 1UL << 27;
    cout <<  quiz1 << endl;
    quiz1 &= ~(1UL << 27);
    cout <<  quiz1 << endl;
    cout << endl;

    vector<int> ivec(10);
    vector<int>::size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0;
            ix != ivec.size(); ix++, cnt--) {
        cout << ix << " " << cnt << endl;
        ivec[ix] = cnt;
        cout << "1       " << ivec[ix] << endl;
    }
    cout << endl;
    int x[10]; int *p = x;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;

}
