#include <iostream>

int main()
{
    int i, p, q, n;
    std::cin >> n;
    int id[n];

    for(i = 0; i < n; i++)
        id[i] = i;

    while( std::cin >> p >> q)
    {
        int t = id[p];
        if( t == id[q] ) continue;
        for(i = 0; i < n; i++)
            if(id[i] == t)
                id[i] = id[q];

        std::cout << " " << p << " " << q << std::endl;
    }
}
