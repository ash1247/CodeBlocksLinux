#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vi(10,10);
    vi[1] = 1;
    vector<string> text(10,"Hi I am Goru.");
    text.push_back("Hi I am Goru");
    for(const auto &s : text){
        cout << s;
        if(s.empty() || s.size() - 1 == '.')
            cout << endl;
        else
            cout << " ";
    }
    int i;
    double dval; int ival; int *pi = &i;
    dval = ival = *pi = 0.0;

    cout << (vi[ival++] && vi[ival]) << endl;
    const char *cp = "Hello World";
    if (cp && *cp)
        cout << 1;

}
