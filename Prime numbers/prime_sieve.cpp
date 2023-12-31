#include <bits/stdc++.h>
#define N 1000000
using namespace std;

void primeSieve(vector<bool> &sieve)
{
    sieve[1] = sieve[0] = false;
    sieve[2] = true;
    for (int i = 3; i < N; i += 2)
    {
        sieve[i] = true;
    }

    for (long long int i = 3; i * i < N; i++)
    {
        if (sieve[i])
        {
            for (long long int k = i * i; k < N; k += i)
            {
                sieve[k] = false;
            }
        }
    }
}

int main()
{
    vector<bool> sieve(N + 1, 0);

    primeSieve(sieve);

    for (int i = 0; i <= 10; i++)
    {
        if (sieve[i])
            cout << i<< " ";
    }
    return 0;
}