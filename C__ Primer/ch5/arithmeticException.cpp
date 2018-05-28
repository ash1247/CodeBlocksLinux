#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int a, b, ans;

    while(cin >> a >> b) {
        try{
            if( b == 0)
                throw runtime_error("0 as the divider");
            ans = a / b;
            cout << "ans = " << ans << endl;
        }
        catch(runtime_error e)
        {
            cout << e.what()
                << "\nTry again? y or n\n";
            char c;
            cin >> c;
            if( !cin || c == 'n')
                break;
        }
    }
}
