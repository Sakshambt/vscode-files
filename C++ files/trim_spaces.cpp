#include <iostream>
using namespace std;

int length(char strin[])
{
    int count = 0;
    for (int i = 0; strin[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[100];
    cin.getline(arr, 100);
    int n = length(arr);
    int i = 0, j = 0;
    cout << n << endl;
    while (i < n)
    {
        if (arr[i] != ' ')
        {
            arr[j] = arr[i];
            j++;
        }
        i++;
    }
    arr[j] = '\0';
    cout << arr;
}