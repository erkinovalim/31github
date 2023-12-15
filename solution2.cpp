#include <bits/stdc++.h>
#define N 1000000
using namespace std;

vector<int> primeSieve(vector<bool> sieve)
{
    vector<int> lol;
    lol.push_back(2);

    sieve[1] = sieve[0] = false;
    sieve[2] = true;

    for (int i = 3; i < sieve.size(); i += 2)
    {
        sieve[i] = true;
    }

    for (long long int i = 3; i < sieve.size(); i++)
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

    vector<bool> sieve(N + 1, 0);

    vector<int> primes = primeSieve(sieve);

    int size = primes.size();

    for (int k = 0; k < tests; k++)
    {
        long long int input;

        cin >> input;

        long long int root = sqrt(input);

        if (input < N)
        {
            if (root * root == input)
            {
                for (int i = 0; i < size; i++)
                {
                    if (primes[i] == root)
                    {
                        cout << "YES" << endl;
                        break;
                    }
                    else if (primes[i] > root)
                    {
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
