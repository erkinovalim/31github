#include <iostream>

using namespace std;

int main()
{
    int towns;

    cin >> towns;

    int daniyarVotes[towns];
    long long int totalVotes[towns];
    long long int sum = 0;
    long long int daniyarSum = 0;
    for (int i = 0; i < towns; i++)
    {
        int talant;

        cin >> daniyarVotes[i] >> talant;
        daniyarSum += daniyarVotes[i];
        totalVotes[i] = daniyarVotes[i] + talant;
    }
    int counter = 0;
    while (sum <= daniyarSum)
    {
        int greatestIndex = 0;

        for (int i = 0; i < towns; i++)
        {
            if(totalVotes[i] > totalVotes[greatestIndex])
                greatestIndex = i;
        }
        
        sum += totalVotes[greatestIndex];

        daniyarSum -= daniyarVotes[greatestIndex];

        daniyarVotes[greatestIndex] = 0;

        totalVotes[greatestIndex] = 0;

        counter++;
    }
    
    cout<<counter<<endl;
}