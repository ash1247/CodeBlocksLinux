#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <list>
#include <forward_list>

using namespace std;

void pluralize(size_t cnt, string &word)
{
    if(cnt > 1)
        word.push_back('s');
}

int main()
{
    vector<string> vs(10, "po"); //insert 10 elements in vs
    deque<string> ds(10,"op");  //same as vs, except in deque

    vs.insert( vs.end(), 10 , "ava");  //insert 10 elements at the of vs
    vs.insert( vs.end(), ds.end() -2, ds.end() ); //copy last to elements of ds in
                    // vs after the last element
    vs.insert( vs.end(), {"these", "ebd"} ); //insert two elements after the end

    list<string> ls;
    ls.assign(ds.begin(), ds.end());

    ls.insert( ls.begin(), "hello");

    ds.insert(ds.begin()+5, "hello"); //insert "hello" in the givel poN

    string word;
    while(cin >> word)
        vs.push_back(word);
    pluralize(word.size(), word);

    ds.push_back("po");
    ds.push_front("pop");

    for(auto x:vs)
        cout << x << endl;

    cout << word << endl;
}
