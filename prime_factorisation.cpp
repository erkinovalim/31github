#include <bits/stdc++.h>

using namespace std;

void factorise(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            int counter = 0;

            while (n % i ==0)
            {
                counter++;

                n /= i;
            }
            
            cout<<i<<"^"<<counter<<endl;
        }
    }
    
}

int main()
{
    int n;

    cin>>n;

    factorise(n);
}