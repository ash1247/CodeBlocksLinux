#include <iostream>

using namespace std;

void fcn2()
{
    size_t v1 = 42;
    auto f2 = [&v1] { return v1; };
    v1 = 0;
    auto j = f2();
}

void fcn3()
{
    size_t v1 = 42;
    auto f = [v1] () mutuable{ return ++v1; };
    v1 = 0;
    auto j = f();
}

void fcn4()
{
    size_t v1 = 42;
    auto f2 = [&v1] { return ++v1; }
    v1 = 0;
    auto j = f2();
}

void biggies(vector<string> &words, vector<string>::size_type sz,
            ostream &os = cout, char c = ' ')
{
    for_each( words.begin(), words.end(),
            [&, c] (const string &s) {os << s << c; });
    for_each(words.begin(), words.end(),
                [=, &os] (const string &s) { os << s << c; });
}

int main()
{
    auto wc = find_if(words.begin(), words.end(),
                [=] (const string &s)
                        { return s.size() >= sz; } );

    transform(vi.begin(), vi.end(), vi.begin(), [] (int i)
                { return i < 0 ? -i : i; });

    transform(vi.begin(), vi.end(), vi.begin(),
            [] (int i) { if ( i < 0) return -i; else return i; });

    transform(vi.begin(), vi.end(), vi.begin(), [] (int i) -> int
                { if ( i < 0) return -i; else return i; });
}
