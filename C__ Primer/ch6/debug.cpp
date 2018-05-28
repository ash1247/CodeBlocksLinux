#include <iostream>

using namespace std;

void print(const string word)
{
    cerr << __func__ << " String size is " << word.size() << endl;
}

void (*pf)(const string word);


int main()
{
    pf = print;
    string word;
    cin >> word;
    int threshold = 5;
    pf(word);
    (*pf)(word);
    print(word);

    print(word);
    if(word.size() > threshold)
    {
        #ifndef NDEBUG
        cerr << "File is: " <<__FILE__
            << "\nCompiled on: " <<__DATE__
            << "\nTime is " __TIME__
            << "\nAt line " << __LINE__ << endl;
        #endif
        cout << "\nPeace\n" << endl;
    }
}
