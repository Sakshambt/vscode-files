#include <iostream>
using namespace std;
#include <cstring>

int length(char strin[])
{
    int count = 0;
    for (int i = 0; strin[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char arr[], int i, int j)
{
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char arr[100];
    cin.getline(arr, 100);
    int n = strlen(arr);
    reverse(arr, 0, n - 1);
    int start = 0, end = 0, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ' ')
        {
            end = i - 1;
            reverse(arr, start, end);
            start = i + 1;
            end = i + 1;
        }
    }
    end = i - 1;
    reverse(arr, start, end);
    cout << arr << endl;
}
