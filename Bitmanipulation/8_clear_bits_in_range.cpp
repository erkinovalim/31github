#include <bits/stdc++.h>

using namespace std;

void clearBitsInRange(int &n, int i, int j)
{
  int a = ~(0)<<j + 1;

  int b = (1<<i) - 1;

  int mask = a|b;

  n = n & mask;
}

int main()
{
int n = 5;

int i = 5;

int j = 2;

clearBitsInRange(n,i,j);

cout<<n;
}
