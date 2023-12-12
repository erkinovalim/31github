#include <bits/stdc++.h>

using namespace std;

void factorise(int n)
{   
    /*
    This loop will search for a factor till the square root of n, 
    because one of the factors of a number always has to be
    equal or smaller than than the square root of the number.

    You can also use sqrt(n) instead of i * i.
    */
    for (int i = 2; i * i <= n; i++)
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
    
    if(n != 1)
        cout<<n<<"^"<<1<<endl;
}

int main()
{
    int n;

    cin>>n;

    factorise(n);
}