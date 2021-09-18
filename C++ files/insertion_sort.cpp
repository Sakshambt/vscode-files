#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i], index = i;
        int j = i;
        while (j > 0 && key < arr[j - 1])
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;

        // for (int j = i - 1; j >= 0; j--)
        // {
        //     if (key < arr[j])
        //     {
        //         arr[index] = arr[j];
        //         index = j;
        //     }
        //     else
        //     {
        //         break;
        //     }
        //     arr[j] = key;
        // }
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
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}