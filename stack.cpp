#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> books;

    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("OS");

    while(!books.empty()) // while the books stack is not empty
    {
        cout<<books.top(); // access the element on the top of the stack (the last element)
        books.pop(); // remove the last element from the stack
    }
}