#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;


int main() {
    vector<string> vs;
    ifstream in("a.txt");
    istream_iterator<string> str_it(in), eof;

    while( str_it != eof)
        vs.push_back(*str_it++);

    for( const auto &s : vs)
        std::cout << s << std::endl;
}





/* examples before the excercise
int main() {

    vector<int> vec;
    istream_iterator<int> int_it(cin);
    istream_iterator<int> int_eof;
    ifstream in("afile.txt");
    istream_iterator<string> str_it(in);

    istream_iterator<int> in_iter(cin);
    istream_iterator<int> eof;

    while( in_iter != eof )
        vec.push_back(*in_iter++);
    //same as above
    //vector<int> vec(in_iter, eof);

    cout << accumulate(in, eof, 0) << endl;

    ostream_iterator<int> out_iter(cout, " ");
    for(auto e : vec)
        *out_iter++ = e;
    cout << endl;

    for( auto e : vec )
        out_iter = e;
    cout << endl;

    istream_iterator<Sales_item> item_iter(cin), eof;
    ostream_iterator<Sales_item> out_iter(cout, "\n");

    Sales_item sum = *item_iter++;
    while(item_iter != eof) {
        if(item_iter-> isbn() == sum.isbn() )
            sum += *item_iter++;
        }
        else {
            out_iter = sum;
            sum = *item_iter++;
        }
    }
    out_iter = sum;
}
*/
