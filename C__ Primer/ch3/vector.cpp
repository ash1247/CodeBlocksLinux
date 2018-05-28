#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v;
    int i, sum=0, sum2 =0;

    while(std::cin >> i)
        v.push_back(i);

    for(int i = 0; i < v.size()-1; i++)
        sum += (v[i]+v[i+1]);

    if(v.size() % 2 == 1)
        for(int i = 0; i < v.size()/2+1; i++)
            sum2 += (v[i]+v[v.size()-i]);
    if(v.size() % 2 == 0)
        for(int i = 0; i < v.size()/2; i++)
            sum2 += (v[i]+v[v.size()-i-1]);

    std::vector<std::string> s1{10, "hi"};

    //for(auto i : v)
      //  std::cout << i << std::endl;
    std::cout << sum << std::endl;
    std::cout << sum2 << std::endl;
    std::cout << v[v.size()] << std::endl;
    /*// count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    unsigned grade;
    while (cin >> grade) { // read the grades
        if (grade <= 100) // handle only valid grades
            ++scores[grade/10]; // increment the counter for the current cluster
    }*/



}
