#include <bits/stdc++.h>

using namespace std;

vector<int> decimaltobinary(int x);
int binary_to_decimal(vector<int> a);
int check_sum(int x);
int take_input();

int main(void)
{
    int sum = 0;

    sum = take_input();

    int a = check_sum(sum);

    sum = take_input();

    int b = check_sum(sum);

    if(a==b)
        cout << "\nData is okay. There is no error.\n";
    else
        cout << "\nData contains error.\n";

    return 0;
}

int take_input()
{
    int sum = 0;
    int word = 0;
    cout << "Enter sending words sizes\n";
    cout << "Word size must be less than 17\n";
    cout << "Enter -1 to exit\n";
    while(word != -1) {
        cin >> word;
        if(word != -1)
            sum += word;
    }
    return sum;
}

int check_sum(int x)
{
    int sum = 0;
    vector<int> a = decimaltobinary(x);
    vector<int> b(7,0);

    for(int i = 0, j = 4; i <= 3, j <= 7; i++, j++) {
        b[i] = a[i] + a[j];
        if(b[i] == 0)
            b[i] = 1;
        else if(b[i] == 1)
            b[i] = 0;
    }
    return binary_to_decimal(b);
}

int binary_to_decimal(vector<int> a)
{
    int decimal = 0;
    for(int i = 0; i < 4; i++)
    {
        decimal += a[i];
    }
    return decimal;
}

vector<int> decimaltobinary(int x)
{
    vector<int> a(8,0);
    int i = 7;
    while(x != 0)
    {
        a[i] = x % 2;
        x /= 2;
        i--;
    }
    return a;
}
