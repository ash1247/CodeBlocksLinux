#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi(10, 2);

    cout << vi.at(0) << endl;
    cout << vi[0] << endl;
    cout << vi.front() << endl;
    cout << *vi.begin() << endl;
}
