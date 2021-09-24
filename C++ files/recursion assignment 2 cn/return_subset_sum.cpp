#include <iostream>
using namespace std;

#include <string>

void print_subset_sum(int a[], int n, int k, int sum, int idx, string p)
{
    if (idx == n)
    {
        if (sum == k)
        {
            cout << p << endl;
        }
        return;
    }

    print_subset_sum(a, n, k, sum, idx + 1, p);
    print_subset_sum(a, n, k, sum + a[idx], idx + 1, to_string(a[idx]) + " " + p);
}

int main()
{
    int n;
    cin >> n;
    int *a = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    print_subset_sum(a, n, k, 0, 0, "");
}