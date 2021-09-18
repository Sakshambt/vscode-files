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

int sumsubsequence(int a[], int n, string path[], int s, string finaloutput[])
{
    if (n == 0)
    {
        path[0] == "";
        return 0;
    }

    int small
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
    printsubsequence(a, n, 0, "");
    return 0;
}