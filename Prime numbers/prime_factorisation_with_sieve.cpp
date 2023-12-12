#include <bits/stdc++.h>

#define N 10000

using namespace std;

void factorisation_sieve(vector<int> &sieve)
{
    sieve[1] = sieve[0] = 0;

    for (long long int i = 2; i * i <= N; i++)
    {
        for (long long int k = i * i; k <= N; k += i)
        {
            if (sieve[k] == 0)
                sieve[k] = i;
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (sieve[i] == 0)
            sieve[i] = i;
    }
}

int main()
{
    vector<int> sieve(N + 1, 0);

    factorisation_sieve(sieve);
    // this will show the smallest factor of numbers from 2 to 100
    for (int i = 2; i  < 100; i++)
    {
        cout<<sieve[i]<<endl;
    }
    
}