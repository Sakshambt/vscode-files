#include <iostream>
using namespace std;

int PrimeCheck(int n)
{
    int num[10000000] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (num[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                num[j] = 1;
            }
        }
    }
    int sum = 0;
    for (int k = 1; k < n; k++)
    {
        if (num[k] == 0)
        {
            sum++;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << (1 + PrimeCheck(n));
}
