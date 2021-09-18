#include <iostream>
using namespace std;

int partition(int a[], int s, int e)
{
    int p = s, pi = a[s];
    for (int i = s; i < e; i++)
    {
        if (pi > a[i])
            p++;
    }
    a[s] = a[p];
    a[p] = pi;
    while (s < e)
    {
        if (a[s] < a[p])
        {
            s++;
        }

        else if (a[e] >= a[p])
        {
            e--;
        }
        else
        {
            int temp = a[e];
            a[e] = a[s];
            a[s] = temp;
        }
    }
    return p;
}

void quicksort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(a, s, e);
    quicksort(a, s, p - 1);
    quicksort(a, p + 1, e);
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
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}