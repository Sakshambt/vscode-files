#include <iostream>
using namespace std;

void printodd(int n)
{
    for (int i = 1; i <= (n * 2) - 1; i = i + 2)
    {
        cout << i << " ";
    }
}
void printeven(int n)
{
    for (int i = n * 2; i >= 2; i = i - 2)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            printodd(n / 2);
            printeven(n / 2);
        }
        else
        {
            printodd(n % 2 + 1);
            printeven(n % 2);
        }
    }
}