#include <iostream>
using namespace std;
#include <stack>
#include <vector>
vector<int> v;
stack<int> s;

void ngr(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            v.push_back(-1);
        }
        else if (s.top() <= arr[i])
        {
            while (s.top() <= arr[i] && s.size() > 0)
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        else if (s.top() > arr[i])
        {
            v.push_back(s.top());
        }
        s.push(arr[i]);
    }
}

int main()
{
    int arr[] = {1, 3, 0, 2, 4};
    ngr(arr, 5);
    for (int i = 4; i >= 0; i--)
    {
        cout << v[i] << endl;
    }
}