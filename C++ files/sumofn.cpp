#include <iostream>
using namespace std;

int add(int n, int sum)
{
    if (n == 1)
    {
        return 1;
    }
    sum = n + add(n - 1, sum);
    return sum;
}

int powerofn(int p, int n)
{
    if (p == 0)
    {
        return 1;
    }
    int pow = n * powerofn(p - 1, n);
    return pow;
}

int main()
{
    int s = add(4, 0);
    cout << s << endl;
    s = powerofn(3, 2);
    cout << s << endl;
}