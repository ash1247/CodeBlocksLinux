#include <iostream>

using namespace std;

void print(const char *cp)
{
    if(cp)
        while(*cp)
            cout << *cp++;

}
void print2(const int *beg, const int *end)
{
    while( beg != end)
        cout << *beg++ << " ";
}

void print3(const int ia[], size_t size)
{
    for(size_t i = 0; i != size; ++i)
        cout << ia[i] << " ";
}
void print5(const int ia[10])
{
    for(size_t i = 0; i != 10; ++i)
        cout << ia[i] << " ";
}
/*void print4( int (*m)[5], int rowSize)
{
    for(size_t i = 0; i != rowSize; i++)
    {
        cout << (*m)[i] << " ";
    }
}*/

int main()
{
    int j[] = {0,1,5,9};
    int ij[] = {0,1,5,9,2,3,4,5,6,32};
    int k[][5] = {0,1,5,9};
    string s;
    cin >> s;
    print(&s[0]);
    cout << endl;
    print2(begin(j), end(j) );
    cout << endl;
    print3( j, end(j) - begin(j) );
    cout << endl;
    print5( ij);
}
