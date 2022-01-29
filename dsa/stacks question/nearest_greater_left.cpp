#include <iostream>
using namespace std;
#include <stack>
#include <vector>
stack<int> s;
vector<int> v;

void ngl(int arr[], int n)
{
    for (int i = 0; i < n; i++)
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
    int arr[] = {1, 3, 2, 4};
    ngl(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << v[i] << endl;
    }
}