#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int n = (N + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int l = 1; l <= n - 1; l++)
    {
        for (int m = 1; m <= l; m++)
        {
            cout << " ";
        }
        for (int b = n - 1; b >= l; b--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    cout << 0 + 5 << endl;
    return 0;
}