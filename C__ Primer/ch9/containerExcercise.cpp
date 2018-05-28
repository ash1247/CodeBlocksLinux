#include <iostream>
#include <list>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    string word;
    deque<string> ds;
    deque<string>::iterator it;

    list<string> ls;
    list<int> lsi;
    list<string>::iterator it2;

    for(int i = 0; i < 10; ++i)
        lsi.push_back(i);

    while(cin >> word){
        ds.push_back(word);
        ls.push_back(word);
    }

    auto it3 = lsi.begin();

    while( it3 != lsi.end() )
        if( *it3 % 2)
            it3 = lsi.erase( it3 );
        else
            ++it3;

    ls.erase(ls.begin() );

    for(auto x: lsi)
        cout << x << endl;

    ds.erase(ds.begin() +2, ds.end() - 2);

    ls.erase(ls.begin(), ls.end());

    ls.push_back("SDS");
    ls.insert(ls.end(),10, "HOOO");

    ls.clear();


    for(it = ds.begin(); it != ds.end(); ++it)
        cout << *it << endl;


    cout << endl;
    cout << endl;

     for(it2 = ls.begin(); it2 != ls.end(); ++it2)
            cout << *it2 << endl;

}
