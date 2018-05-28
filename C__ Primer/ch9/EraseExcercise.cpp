#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <string>

using namespace std;

int main()
{
    int ia[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13};

    list<int> li( ia, ia + ( (sizeof ia)/(sizeof ia[0]) ) );
    vector<int> vi(ia, ia + ( (sizeof ia)/(sizeof ia[0]) ) );

    auto itl = li.begin();
    auto itv = vi.begin();

    while( itl != li.end() )
    {
        if( *itl % 2 == 1 )
            itl = li.erase(itl);
        if( *itv % 2 == 0 )
            itv = vi.erase(itv);

        ++itl;
        ++itv;
    }


    cout << "list" << endl;

    for(auto x: li)
        cout << x << endl;

    cout << endl;
    cout << "vector" <<  endl;

    for(auto x : vi )
        cout << x << endl;
}
