#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> first;                               // empty deque of ints
    deque<int> second(4, 100);                      // four ints of value 100
    deque<int> third(second.begin(), second.end()); // iterating through second
    deque<int> fourth(4, 100);                      // a copy of third (same as third)

    // the iterator constructor can be used to copy arrays
    // copying method as shown in the fourth deque cannot be used to copy arrays

    int myints[] = {16, 2, 77, 29};
    int n = sizeof(myints) / sizeof(int);

    deque<int> fifth(myints, myints + n);

    // push back
    fifth.push_back(100);

    // pop back
    fifth.pop_back();

    // push front
    fifth.push_front(100);

    // pop front
    fifth.pop_front();

    // get reference to front or back elements
    cout << fifth.front() << endl;
    cout << fifth.back() << endl;

    // access elements in the deque
    cout << fifth.at(0) << endl;
    cout << fifth[0] << endl;
}