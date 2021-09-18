#include <iostream>
using namespace std;

bool is_sorted(int a[], int n)
{
    if (n == 0 || n == 1)
        return true;

    if (a[0] > a[1])
    {
        return false;
    }
    return is_sorted(a + 1, n - 1);
}

int sum_of_array(int a[], int n, int sum)
{
    if (n == 0)
    {
        return sum;
    }
    sum = a[0] + sum_of_array(a + 1, n - 1, sum);
    return sum;
}

int first_index(int a[], int n, int x)
{
    if (n == 0)
    {
        return -1;
    }
    if (a[0] == x)
    {
        return 0;
    }
    int index = first_index(a + 1, n - 1, x);
    if (index == -1)
        return -1;

    else
        return index + 1;
}

int last_index(int a[], int n, int x)
{
    if (n == 0)
    {
        return -1;
    }
    int index = last_index(a + 1, n - 1, x);
    if (index == -1)
    {
        if (a[0] == x)
            return 0;

        else
            return -1;
    }
    else
        return index + 1;
}

void all_index_of_number(int a[], int n, int x, int i, int f)
{
    if (n == 0)
    {
        if (f == -1)
            cout << -1 << " ";

        else
            return;
    }
    if (a[0] == x)
    {
        cout << 0 + i
             << " ";
        f = 0;
    }
    all_index_of_number(a + 1, n - 1, x, i + 1, f);

    return;
}

all_index_of_number_2(int a[], int n, int x, int output[])
{

    if (n == 0)
    {
        output[0] = -1;
        return 0;
    }
    int size = all_index_of_number_2(a, n - 1, x, output);
    if (a[n - 1] == x)
    {
        output[size] = n - 1;
        return size + 1;
    }
    else
        return size;
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int *output = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    //cout << last_index(a, n, x) << endl;
    int size = all_index_of_number_2(a, n, x, output);

    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
    cout << size;
}