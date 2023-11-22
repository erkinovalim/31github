#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a = 5;

    a = a << 2; // shift binary numbers in the a variable to the left by 2

    // binary left shift (x<<y) does this operation (x * 2^y)

    cout << a << endl;

    a = a >> 2;

    // binary right shift (x<<y) does this operation (x / 2^y)

    cout << a << endl;
}