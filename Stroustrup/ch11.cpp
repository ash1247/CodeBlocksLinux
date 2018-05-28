#include <bits/stdc++.h>

using namespace std;

class Punct_stream{

public:
    void whitespace(const string& s)
    {   white = s; }
    void add_white(char c) {white += c;}
    bool is_whitespace(char c);
    void case_sensitive(bool b){ sensitive = b;}
    bool is_case_sensitive() { return sensitive; }

    Punct_stream& operator>>(string& s);
    operator bool();

private:

    Punct_stream(istream& is)
        : source{is}, sensitive{true}{ }
    istream& source;
    istringstream buffer;
    string white;
    bool sensitive;
};

Punct_stream& Punct_stream::operator>>(string& s)
{
    while(!(buffer>>s)){
        if(buffer.bad() || source.good()) return *this;
        buffer.clear();

        string line;
        getline(source,line);

        for(char& ch: line)
            if(is_whitespace(ch))
                ch = ' ';
            else if(!sensitive)
                ch = tolower(ch);

        buffer.str(line);
    }
    return *this;
}

bool Punct_stream::is_whitespace(char c)
{
    for(char w : white)
    {
        if(c==w) return true;
        return false;
    }
}

Punct_stream::operator bool()
{
    return !(source.fail() || source.bad()) && source.good();
}

/*void get_line()
{
    string line;
    getline(cin, line);
    for(char& ch : line)
        switch(ch){
        case ';': case ',': case '?': case '!':
            char = ' ';
        }
    stringstream ss(line);
    vector<string> vs;
    for(string word; ss >> word;)
        vs.push_back(word);
}*/
void check(char c)
{
    isspace(c);
    isalpha(c);
    isdigit(c);
    isxdigit(c);
    isupper(c);
    islower(c);
    isalnum(c);
    iscntrl(c);
    ispunct(c);
    isprint(c);
    isgraph(c); //isalpha(c) || isdigit(c) || is punct(c)
}

string get_whole_line(){
    string s;
    getline(cin, s);
    return s;
}

/*void code(string label)
{
    ostringstream os;
    os << setw(8) << label << ": "
        << fixed << setprecision(5) << temp.temp << temp.unit;
    someobject.display(Point(100,100), os.str(), c_str() );

}*/
double str_to_string(string s)
{
    istringstream is{s};
    double d;
    is >> d;
    if(!is) cout << "double format error: " << s << "\n";
    return d;
}

int main(void)
{
    Punct_stream ps {cin};
    ps.whitespace(";:,.?!()\"{}<>/&$@#%^*|~");
    ps.case_sensitive(false);

    cout << "please enter words\n";
    vector<string> vs;
    for(string word; ps >> word; )
        vs.push_back(word);

    sort(vs.begin(), vs.end() );
    for(int i = 0; i < vs.size(); i++)
        if(i==0||vs[i] != vs[i-1]) cout << vs[i] << '\n';
   /* double d1 = str_to_string("12.4");
    double d2 = str_to_string("13e-4");
    double d3 = str_to_string("twelve point three");

    cout << d1 << d2 << d3;
    cout << "enter input file name\n";
    string iname;
    cin >> iname;
    ifstream ifs{iname, ios_base::binary};

    if(!ifs) cout << "can't open output file" << iname << '\n';

    cout << "enter output file name\n";
    string oname;
    cin >> oname;
    ofstream ofs {oname, ios_base::binary};

    if(!ofs) cout << "can't open output file " << oname << '\n';

    vector<int> v;
    */

   /* for(int x; ifs.read(as_bytes(x), sizeof(int)); )
        v.push_back(x);

    for(int x: v)
        ofs.write(as_byts(x), sizeof(int));
    */
    return 0;
    /*cout << 1234 << '\t' << hex << 1234 << '\t' << oct << 1234 << '\n';
    cout << showbase << dec;
    cout << 1234 << '\t' << hex << 1234 << '\t' << oct << 1234 << '\n';
    int a, b, c, d;
    cout << setw(4);
    cout << 23423;
    cout << setprecision(2);
    cout << 1234.56789 << '\n'
        << fixed << 1234.56789 << '\n'
        << scientific << 1234.56789 << '\n';

    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

    cin.unsetf(ios::dec);
    cin.unsetf(ios::dec);
    cin.unsetf(ios::hex); */

}
