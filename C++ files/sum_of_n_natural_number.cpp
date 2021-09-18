#include <iostream>
using namespace std;

int sum(int i, int s)
{
    if (i <= 1)
    {
        return 1;
    }

    s = i + sum(i - 1, s);
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n, 0) << endl;
    return 0;
}