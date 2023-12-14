#include <bits/stdc++.h>

using namespace std;

void primeSieve(vector<bool> &sieve)
{
    sieve[0] = sieve[1] = 1;

    for (int i = 2; i * i <= sieve.size(); i++)
    {
        for (int k = i * i; k <= sieve.size() ; k+=i)
        {
            sieve[k] = 0;
        }
    }
}

void segment(int low, int high)
{

}

int main()
{
    int low, high;

    cin >> low >> high;

    vector<bool> sieve(sqrt(high) + 1, 1);

    primeSieve(sieve);

    vector<int> segment(high - low + 1, true);

    for (int i = 2; i * i <= sqrt(high) + 1; i++)
    {
        
    }
    
}

