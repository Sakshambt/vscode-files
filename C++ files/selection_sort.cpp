#include <iostream>
using namespace std;

void Selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int small = arr[i], index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (small > arr[j])
            {
                small = arr[j];
                index = j;
            }
        }
        arr[index] = arr[i];
        arr[i] = small;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Selectionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}