#include <iostream>

using namespace std;
//A swap function to swap the pointer of two variables.
void pointer_swap(int *a, int *b)
{
    int *r = a;
    cout << *r << endl;
    cout << a << endl;
    cout << b << endl;
    a = b;
    cout << a << endl;
    b = r;
    cout << b << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    pointer_swap(&a, &b);

    cout << a << " " << b << endl;
}
