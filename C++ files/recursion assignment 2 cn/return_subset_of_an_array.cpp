#include <iostream>
#include <string>
using namespace std;

void printsubsequence(int a[], int n, int idx, string path)
{
    if (idx == n)
    {
        cout << path << endl;
        return;
    }

    printsubsequence(a, n, idx + 1, path);
    printsubsequence(a, n, idx + 1, to_string(a[idx]) + " " + path);
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    printsubsequence(a, n, 0, "");
    return 0;
}