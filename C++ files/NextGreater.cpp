#include <bits/stdc++.h>
using namespace std;
#include "class_Stack.h"

void nextLargerElement(int arr[], int n)
{
    // Your code here
    Stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.isEmpty())
        {
            s.push(arr[i]);
            continue;
        }
        while (s.isEmpty() == false && s.top() < arr[i])
        {
            cout << s.top() << "-->" << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while (s.isEmpty() == false)
    {
        cout << s.top() << "--> -1" << endl;
        s.pop();
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextLargerElement(arr, n);
    return 0;
}