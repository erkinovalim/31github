#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number;

    cin >> number;

    for (int i = 1; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            cout << i << endl;
    }
}