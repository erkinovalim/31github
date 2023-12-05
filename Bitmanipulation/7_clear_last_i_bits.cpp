#include <bits/stdc++.h>

using namespace std;

void clearLastIBits(int &n, int i)
{
    int mask = (-1 << i);

    n = n & mask;
}

int main()
{
  int n = 5;

  int i = 2;

  clearLastIBits(n , i);

  cout<<n;
}
