#include <bits/stdc++.h>

using namespace std;

vector<int> primeSieve(vector<bool> sieve)
{
    vector<int> lol;

    sieve[1] = sieve[0] = false;
    sieve[2] = true;
    for (int i = 3; i < sieve.size(); i += 2)
    {
        sieve[i] = true;
    }

    for (long long int i = 3; i * i < sieve.size(); i++)
    {
        if (sieve[i])
        {
            lol.push_back(i);

            for (long long int k = i * i; k < sieve.size(); k += i)
            {
                sieve[k] = false;
            }
        }
    }

    return lol;
}

int main()
{
    int tests;

    cin >> tests;

    for (int i = 0; i < tests; i++)
    {
        long long int input;

        cin >> input;

        vector<bool> sieve(sqrt(input) + 1, 1);

        vector<int> primes = primeSieve(sieve);
        int counter = 0;
        for (int k = 0; k < primes.size(); k++)
        {
            if (input % primes[k] == 0)
                counter++;
        }

        if (counter > 0 && counter < 2)
            for (int i = 0; i < primes.size(); i++)
            {
                cout << primes[i] << endl;
            }

        else
        {
            cout << "NO" << endl;
        }
    }
}