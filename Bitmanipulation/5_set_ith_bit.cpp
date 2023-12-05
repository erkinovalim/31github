#include <bits/stdc++.h>

using namespace std;

void set_ith_bit(int &n, int i)
{
    int mask = (1<<i);

    n = (n|mask);
}

int main()
{
    int n = 5;

    int i;

    cin>>i;

    set_ith_bit(n,i);

    cout<<n;
}
