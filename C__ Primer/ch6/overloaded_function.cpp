#include <iostream>

using namespace std;

void print(const char *cp);
void print(const int *beg, const int *end);
void print(const int ia[], size_t size);

int main()
{
    int j[2] = {0,1};
    print("Hello World");
    cout << endl;
    print( j, end(j) - begin(j) );
    cout << endl;
    print( begin(j), end(j) );
    cout << endl;
}

void print(const char *cp)
{
    if(cp)
        while(*cp)
            cout << *cp++ << " ";
}

void print(const int *beg, const int *end)
{
    while( beg != end)
        cout << *beg++ << " ";
}

void print(const int ia[], size_t size)
{
    for(int i = 0; i < size; ++i)
        cout << ia[i] << " ";
}
