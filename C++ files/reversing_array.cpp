#include <iostream>
using namespace std;

void reverse(int a[], int n)
{
    int i = 0, j = n - 1;
    int temp;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
void reversealternate(int a[], int n)
{
    int i = 0, j = 1;
    int temp;
    while (j < n)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i += 2;
        j += 2;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int store;                      //to store value for swapping
    for (int i = 0; i < n / 2; i++) //my method of swapping two variables
    {
        store = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = store;
    }

    reverse(arr, n); //checking second method
    reversealternate(arr, n);

    for (int i = 0; i < n; i++) //to print array
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}