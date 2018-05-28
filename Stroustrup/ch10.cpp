#include <bits/stdc++.h>

using namespace std;

struct Reading {
        int day;
        int hour;
        double temp;
};


void skip_to_int(){

        if(cin.fail()){
            cin.clear();
            for(char ch; cin >> ch;){
                if(isdigit(ch) || ch == '-'){
                    cin.unget();
                    return;
                }
            }
        }
        cout << ("no input\n");
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
            << ',' << d.month()
            << ',' << d.day() << ')';

}

istream& operator>>(istream& is, Reading& r)
{
    int h,d;
    double t;
    char ch1,ch2;

    if(is >> ch1 && ch1 != '(') {
        is.unget();
        is.clear(ios_base::failbit);
        return is
    }

    is >> f >> h >> t >> ch2;
    if(!is || ch2 != ')' ) cout << "bad reading\n";
    r.day = d;
    r.hour = h;
    r.temp = t;
    return is;
    }

    dd = Date(y, Date::Month(m), d);
    return is;
}

istream& operator2>>(istream& is, Month& m)
{
    char ch = 0;
    if( is >> ch && ch != '('){
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }

    string month_marker,mm;
    is >> month_marker >> mm;
    if(!is || month_marker != "month") cout << "bad start of month\n";
    m.month = month_to_int(mm);
    int duplicates = 0;
    int invalid = 0;
    for(Reading r; is >> r;){
        if(is_valid(r)){
            if(m.day[r.day].hour[r.hour] != not_a_reading)
                duplicates++;
            m.day[r.day].hour[r.hour] = r.temp;
        }
        else
            invalids++;
    }

    if(invalids) cout << "invalid readings in month " << invalids << "\n";
    if(duplicates) cout << "duplicate readings in month " << invalids << "\n";
    end_of_loops(is, ')', "bad end of month");
    return is;
}

int main(void) {

    cout << "enter an integer between 1-10\n";
    int n = 0;
    istream& ist;

    for(type var; ist >> var){
        if(ist.bad()) cout << "bad input stream\n";
        if(ist.fail()) {
            ist.clear();
            char ch;
            if(!(ist>>ch&&ch=='|')) cout << "bad input\n";
        }
    }

    ist.exceptions(ist.exceptions()|ios_base::badbit);

    while(true){
        if(cin>>n) {
            if( 1<=n && n<=10 ) break;
                cout << "Sorry "
                << n << " is not in the range\nTry again\n";
            }
        else{
            cout << "Sorry that was not a number. Try again\n";
            skip_to_int();
        }
    }
}
