#include <iostream>
using namespace std;
int const mod = 1e9 + 7;

int power(int a, int n)
{
    if (n == 0)
        return 1;

    int p = (power(a, n / 2) % mod);
    if (n & 1)
    {
        return (((p * p) % mod) * a) % mod;
    }
    else
    {
        return (p * p) % mod;
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int temp = power(2, n);
        int ans = power(temp - 1, m);
        cout << ans << endl;
    }
}