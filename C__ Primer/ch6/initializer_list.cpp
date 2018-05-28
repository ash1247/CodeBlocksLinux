#include <iostream>
#include <stdexcept>
#include <exception>

using namespace std;

void error_msg(initializer_list<string> ils)
{
    for(auto beg = ils.begin(); beg != ils.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}
void error_msg(ErrCode e, initializer_list<string> ils)
{
    cout << e.msg() << ": ";
    for (const auto &elem : ils)
        cout << elem << " ";
    cout << endl;
}

int main()
{
    if(expected != actual)
        error_msg( {"functionX", expected, actual} );
    else
        error_msg( {"functionX", "okay"} );

    if( expected != actual )
        error_msg(ErrCode(42), {"functionX", expected, actual } );
    else
        error_msg(ErrCode(0), {"functionX", "okay"});
}
