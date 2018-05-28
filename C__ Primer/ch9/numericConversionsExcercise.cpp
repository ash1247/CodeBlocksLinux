#include <iostream>
#include <string>
#include <vector>


double sum(const std::vector<std::string> &vs)
{
    int i = 0, sum = 0;
    double d, sumd = 0;
    for(auto x : vs) {
        i = stoi( x);
        d = stod( x);
        sumd += d;
    }
    return sumd;
}

int main()
{
    std::vector<std::string> vs;
    std::string s;
    while(std::cin >> s)
    {
        vs.push_back(s);
    }

    std::cout << sum(vs) << std::endl;

}
