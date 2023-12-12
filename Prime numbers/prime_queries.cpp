#include <bits/stdc++.h>
#define N 1000000
using namespace std;

void primeSieve(vector<bool> &sieve)
{
    sieve[1] = sieve[0] = false;

    for (int i = 3; i <= N; i += 2)
    {
        sieve[i] = true;
    }

    for (long long int i = 3; i <= N; i++)
    {
        if (sieve[i])
        {
            for (long long int k = i * i; k <= N; k += i)
            {
                sieve[k] = false;
            }
        }
    }
}

int main()
{
    int q;

    cin >> q;
    vector<bool> sieve(N + 1, 0);

    primeSieve(sieve);

    for (int i = 0; i < q; i++)
    {
        int n1, n2;

        cin >> n1 >> n2;

        int counter = 0;

        for (int i = n1; i <= n2; i++)
        {
            if (sieve[i])
                counter++;
        }

        cout << counter << endl;
    }

    return 0;
}