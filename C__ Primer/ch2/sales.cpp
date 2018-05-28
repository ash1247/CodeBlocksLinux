#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    double price = 0.0;
    Sales_data data1, data2;

    std::cin >> data1.bookno >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cin >> data2.bookno >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if(data1.bookno == data2.bookno){
        unsigned total_count = data1.units_sold + data2.units_sold;
        double total_revenue = data1.revenue + data2.revenue;

        std::cout << data1.bookno << " " << total_count
                    << " " << total_revenue << " ";
        if(total_count != 0)
            std::cout << total_revenue/total_count << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return  0;
    }
    else {
        std::cerr << "Data must refer to the same ISBN"
                    << std::endl;
        return -1;
    }
}
