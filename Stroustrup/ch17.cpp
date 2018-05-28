#include <bits/stdc++.h>

using namespace std;

struct Link {
    string value;
    Link* prev;
    Link* succ;
    Link(const string& v, Link* p = nullptr, Link* s = nullptr)
        : value{v}, prev{p}, succ{p}{ }
};

Link* insert(Link* p, Link* n)
{
    if(n==nullptr) return p;
    if(p==nullptr) return n;
    n->succ = p;
    if(p->prev) p->prev->succ = n;
    n->prev = p->prev;
    p->prev = n;
    return n;
}

class Vector {

    int sz;
    double* elem;

public:
    Vector(int s)
    :sz{s}, elem{new double[s]}
    {
        for(int i = 0; i < s; i++)
            elem[i] = 0;
    }
    double get(int n) const{ return elem[n]; }
    void set(int n, double v) { elem[n] = v; }
    ~Vector() { delete[] elem; }
    int size() const{ return sz; }
};

istream& read_word(istream& is, char* buffer, int max)
{
    is.width(max);
    is >> buffer;

    return is;
}

bool is_palindrome(const char* first, const char* last)
{
    while(first < last)
    {
        if(*first!=*last) return false;
        ++first;
        --last;
    }
    return true;
}

int main(void)
{
    Link* norse_gods = new Link{"Thor"};
    norse_gods = insert(norse_gods, new Link{"Odin"} );
    norse_gods = insert(norse_gods, new Link{"Freiya"} );
    const int max = 128;
    for(char s[max]; read_word(cin,s,max);) {
        cout << s << " is";
        if(!is_palindrome(&s[0],&s[strlen(s)-1]))
            cout << " not";
        cout << " a palindrome\n";

    }


    /*int x = 3;
    cout << x << endl;
    int* px = &x;
    cout << *px << endl;
    cout << px << endl;
    *px = 7;
    cout << *px << endl;
    int x1 = *px;
    cout << x1 << endl;
    int* p1 = &x1;
    cout << p1 << endl;
    p1 = px;
    cout << p1 << endl;
    px = &x1;
    cout << px << endl;
    int y =10;
    int& r = y;
    cout << r << endl;
    r = 7;
    cout << r << endl;
    int y2 = r;
    cout << y2 << endl;
    int& r2 = y2;
    cout << r2 << endl;
    r2 = 4;
    cout << r << endl; */

}
