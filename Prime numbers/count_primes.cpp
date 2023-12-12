#include <bits/stdc++.h>
#define N 1000000

using namespace std;

void primeSieve(vector<bool> &sieve)
{
    sieve[1] = sieve[0] = 0;
    sieve[2] = true;

    for (int i = 3; i <= N; i+=2)
    {
        sieve[i] = true;
    }
    
    for (long long int i = 3; i * i <= N; i++)
    {
        if(sieve[i])
        {
            for (long long int k = i * i; k <= N; k+=i)
            {
                sieve[k] = false;
            }
        }
    }
    
}

int main()
{
    vector<bool> sieve(N + 1,0);

    primeSieve(sieve);

    int n;

    cin>>n;

    int counter = 0;
    for (int i = 2; i < n; i++)
    {
        if(sieve[i] == true)
            counter++;
    }
    
    cout<<counter<<endl;
}