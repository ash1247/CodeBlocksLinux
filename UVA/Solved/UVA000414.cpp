#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <cstdio>
#include <climits>

using namespace std;

int main()
{
    int n;

    while(cin >> n, n)
    {
        cin.ignore();

        vector<int> spaces(n);
        int total = 0;
        int minSpaces = -1;

        string line;

        for(int i = 0; i < n; ++i)
        {
            getline(cin, line);
            int spaceCount = 0;
            for(string::iterator it = line.begin(); it != line.end(); ++it)
            {
                if( *it != 'X')
                    ++spaceCount;
            }

            spaces[i] = spaceCount;
            if(spaceCount < minSpaces || minSpaces == -1)
                minSpaces = spaceCount;
        }

        for(int i = 0; i < n; ++i)
            total += spaces[i] - minSpaces;

        cout << total << endl;
    }

    return 0;
}
