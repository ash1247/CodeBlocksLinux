#include <bits/stdc++.h>

using namespace std;

struct book
{
    string title, author;

    inline bool operator<(const book& a)
    {
        if(author != a.author)
            return author < a.author;
        else
            return title < a.title;
    }
};

void shelve(vector<book>& books)
{
    string temp;

    book curr_book;

    while(cin >> temp, temp != "END")
    {
        curr_book.title = "";

        bool first = true;

        while(*(temp.end()-1) != '"' )
        {
            if(!first)
                curr_book.title += ' ';

            first = false;
            curr_book.title += temp;

            cin >> temp;
        }

        if(!first)
            curr_book.title += ' ';

        curr_book.title += temp;

        cin >> temp;

        cin.ignore();

        getline(cin, curr_book.author);
        books.push_back(curr_book);
    }
}

int main()
{
    vector<book> books;
    shelve(books);
    int num_books = books.size();
    sort(books.begin(),books.end());

    map<string, int> books_position;
    for(int i = 0; i < num_books; i++)
        books_position[books[i].title] = i;

    vector<bool> returned(num_books, false);
    vector<bool> borrowed(num_books, false);

    string command, book_name;
    int pos;
    while(cin>>command, command != "END")
    {
        if(command == "BORROW")
        {
            cin.ignore();
            getline(cin,book_name);
            pos = books_position[book_name];
            borrowed[pos] = true;
            returned[pos] = false;
        }
        else if(command == "RETURN")
        {
            cin.ignore();
            getline(cin,book_name);
            pos = books_position[book_name];
            returned[pos] = true;
        }
        else
        {
            int previous = -1;
            for(int i = 0; i < num_books; i++)
            {
                if(!borrowed[i])
                    previous=i;
                else if(returned[i])
                {
                    if(previous == -1)
                        cout << "Put " << books[i].title << " first\n";
                    else
                        cout << "Put " << books[i].title << " after "
                                    << books[previous].title << '\n';

                    returned[i] = false;
                    borrowed[i] = false;
                    previous = i;
                }
            }

            cout << "END\n";
        }

    }
    return 0;
}
