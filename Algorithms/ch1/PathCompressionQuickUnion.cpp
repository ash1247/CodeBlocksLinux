#include <iostream>

static const int n = 10000;

int main()
{
    int i, j, p, q, id[n], sz[n];

    for(i = 0; i < n; i++)
    {
        id[i] = i;
        sz[i] = i;
    }

    while(std::cin >> p >> q)
    {
        for(i = p; i != id[i]; i = id[i] )
            id[i] = id[id[i]];
        for(i = q; j != id[j]; j = id[j] )
            id[j] = id[id[j]];
        if(i == j) continue;

        if( sz[i] < sz[j] )
        {
            id[i] = j;
            sz[j] += sz[i];
        }
        else
        {
            id[j] = i;
            sz[i] += sz[j];
        }

        std::cout << " " << p << " " << q << std::endl;
    }
}

