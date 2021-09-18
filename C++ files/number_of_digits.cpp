#include <iostream> //library
using namespace std;

int Number(int n)
{
    if (n % 10 == n)
    {
        return 1;
    }
    return 1 + Number(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << Number(n);
}
