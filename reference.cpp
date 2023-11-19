#include <bits/stdc++.h>

using namespace std;

void Increment(int &value)
{
    value++;
};

int main()
{
    int a = 5;
    int b = 8;
    // references are not variables
    int *ref = &a;
    *ref = 2;
    ref = &b;
    *ref = 1;

    Increment(a);
    Increment(b);

    cout << a<<endl;
    cout << b;
}