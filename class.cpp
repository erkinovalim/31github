#include <bits/stdc++.h>

using namespace std;

class Book
{
public:
    string name;
    int numberOfPages;
};

int main()
{
    Book MyFavoriteBook;

    MyFavoriteBook.name = "Harry Potter";
    MyFavoriteBook.numberOfPages = 300;

    cout << MyFavoriteBook.name;
}