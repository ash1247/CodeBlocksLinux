#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <iterator>
#include <array>

using namespace std;

vector<int>::iterator searchRange( vector<int>::iterator it, decltype(it) end, int x);

int main()
{
    std::list<std::deque<int>> ldi;
    vector<int> v(10,1);
    vector<int>::iterator it = v.begin();
    vector<int>::iterator end = it+9;
    int x = 7;
    v[7] = 7;
    list<int> li(10);
    vector<double> vd(li.begin(), li.end());
    vector<int> vi(10,1);
    vector<int> vi2(10);

    vi2 = vi;


    auto result = searchRange(it+5, end, x);

    if(*result != 7)
        cout << "not found\n";
    else
        cout << "found\n";


}

vector<int>::iterator searchRange( vector<int>::iterator it, decltype(it) end, int x)
{
    while( it != end )
    {
        if( *it == x){
            return it;
        }
        ++it;
    }
    return it;

}
