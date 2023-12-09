#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

string addNumbers(string n1, string n2)
{
    // the second number always has to be larger than the first
    if(n1.length() > n2.length())
    {
        swap(n1,n2);
    }
    // reversig the strings
    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());

    string result = "";
    int carry = 0;

    // adding the digits from 0 to n1.length()

    for (int i = 0; i < n1.length(); i++)
    {
        int digit1 = n1[i] - '0';
        int digit2 = n2[i] - '0';

        int sum = digit1 + digit2 + carry;

        int resultDigit = sum % 10;

        carry = sum / 10;

        result.push_back(resultDigit + '0');
    }

    // adding digits from n1.length() to n2.length()

    for (int i = n1.length(); i < n2.length(); i++)
    {
        int digit2 = n2[i] - '0';

        int sum = digit2 + carry;

        int resultDigit = sum % 10;

        carry = sum / 10;

        result.push_back(resultDigit + '0');
    }

    // add one at the end of the number if there is a carry

    if(carry)
        result.push_back('1');
    
    // reverse the number again

    reverse(result.begin(), result.end());

    return result;
};

int main()
{
    string s1;
    string s2;

    cin>> s1>> s2;

    cout<< addNumbers(s1,s2)<<endl;
}