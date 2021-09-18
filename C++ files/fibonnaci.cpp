#include <iostream>
using namespace std;

int fibonacci(int x, int y, int n, int count)
{
    int sum = x + y;
    count++;
    if (count == n)
    {
        return sum;
    }
    return fibonacci(y, sum, n, count);
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    //cout << fibonacci(0, 1, n, 2);
    cout << fib(n) << endl;
    return 0;
}