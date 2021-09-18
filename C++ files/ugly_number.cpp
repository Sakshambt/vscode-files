#include <iostream>
using namespace std;

int ugly(int n)
{
    while (n % 2 == 0)
    {
        n = n / 2;
    }
    for (int i = 3; i <= 5; i += 2)
    {
        while (n % i == 0)
        {
            n = n / i;
        }
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    int count = 1;
    int j = 2;
    while (count != n)
    {
        if (ugly(j))
        {
            count++;
        }
        j++;
    }
    cout << j - 1 << endl;
    return 0;
}