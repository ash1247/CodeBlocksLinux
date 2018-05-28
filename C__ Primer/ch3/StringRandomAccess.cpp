#include <iostream>

using namespace std;

int main()
{
    const string hexdigits = "0123456789ABCDEF";

    cout << "Enter a series of number between 0 and 15"
        << " separated by spaces.\nHit Enter when done.\n";

    string result;
    string::size_type n;
    while(cin>>n)
        if(n < hexdigits.size() )
            result += hexdigits[n];

    for(char &c: hexdigits)
        c = tolower(c);
    cout << hexdigits << endl;
    cout << "Your hex number is: " << result << endl;
}
