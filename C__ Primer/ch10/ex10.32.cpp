#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <iostream>
#include <fstream>
#include "Sales_Item.h"

bool compareIsbn_v2(const Sales_item &sd1, const Sales_item &sd2 ) {
    return sd1.isbn() < sd2.isbn();
}

int process_transaction(std::istream &in, std::ostream &out) {
    Sales_item total;
    if(in >> total) {
        Sales_item trans;
        while( in >> trans ) {
            if( total.isbn() == trans.isbn() ) {
                total += trans;
            } else {
                out << total << std::endl;
                total = trans;
            }

        }
    }
}

int process_transaction_v2(std::istream &in, std::ostream &out) {
    std::istream_iterator<Sales_item> i_iter(in), eof;
    std::vector<Sales_item> trans(i_iter, eof);
    if(trans.empty() ) {
        std::cerr << "No data!" << std::endl;
        return -1;
    }
    sort(trans.begin(), trans.end(), compareIsbn_v2 );

    std::ostream_iterator<Sales_item> o_iter(out, "\n");
    for(auto bg = trans.begin(), ed = bg; bg != trans.end(); bg = ed) {
        ed = std::find_if_not(bg, trans.end(),
                [bg] (const Sales_item &i){ return i.isbn() == bg->isbn(); });
    }
    return 0;
}

int main(int argc, char **argv) {
    std::ifstream in("a.txt");
    std::ofstream out("b.txt", std::ofstream::app);

    process_transaction_v2(in, out);
    process_transaction_v2(in, std::cout);
}
