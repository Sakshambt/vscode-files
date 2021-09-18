#include <iostream>
using namespace std;

void merge(int a[], int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int *output = new int[end - start + 1];
    int count = 0;
    while (i <= mid & j <= end)
    {
        if (a[i] < a[j])
        {
            output[count] = a[i];
            i++;
        }
        else
        {
            output[count] = a[j];
            j++;
        }
        count++;
    }
    while (i <= mid)
    {
        output[count] = a[i];
        i++;
        count++;
    }
    while (j <= end)
    {
        output[count] = a[j];
        j++;
        count++;
    }
    i = start;
    for (int k = 0; k < count; k++)
    {
        a[i] = output[k];
        i++;
    }
}

void mergesort(int a[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;
    mergesort(a, start, mid);
    mergesort(a, mid + 1, end);
    merge(a, start, mid, end);
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
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}