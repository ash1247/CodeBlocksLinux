#include <iostream>

using namespace std;

string w[5] = {"21","22","24","25","27"};

decltype(w) *ret5(int i)
{
    return &w;
}
string (&ret(int i) )[5]
{
    return w;
}
string (*ret2(int i) )[5]
{
    return &(w);
}
string *ret1(int i)
{
    return w+i;
}
//auto ret3(int i) -> string (*)[5];

int main()
{
    cout << (*ret(2))[2] << endl;
    cout << *ret1(2) << endl;
    cout << **ret2(1) << endl;
    cout << **ret5(4) << endl;
    //cout << *ret3(1) << endl;
}
