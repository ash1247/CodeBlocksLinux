#include <iostream>

using namespace std;

int is_larger(int a, int *b)
{
    if(a > *b)
        return a;
    else
        return *b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int c = is_larger(a, &b);

    cout << c << endl;

}
