#include "iostream"
#include "vector"

using namespace std;

int main()
{
    // Empty Container Constructor
    vector<int> first;

    // Fill Constructor (4 integers with value 20)
    vector<int> second(4,20);

    // Range Constructor
    int numbers[] = {10,20,30,40};
    vector<int> third(numbers,numbers + 4);

    // Copy Constructor
    vector<int> fourth(third);

    // Another Way
    vector<int> fifth = {1,2,3,4,10};

    //**************************************************//

    vector<int> arr = {1,2,3,4,10};

    // Access element
    arr.at(0);
    arr[0];

    // get the current size
    arr.size();

    // get the underlying capacity
    arr.capacity();

    // get the max size (available due to system or library implementations)
    arr.max_size();

    //**************************************************//

    // push_back method O(1), linear if re-allocation happens
    arr.push_back(20);
    
    // pop_back method O(1)
    arr.pop_back();

    // clear all elements in the current vector, reduces size to 0
    arr.clear();

    // erase the 4th element
    arr.erase(arr.begin() + 3);
    
    // erase the range - first 3 elements
    arr.erase(arr.begin(), arr.begin() + 3);
}