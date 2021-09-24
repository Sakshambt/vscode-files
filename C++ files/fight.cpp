#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, q;
    cin >> n >> q;
    int *b = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int *a = new int[q];
    int x = 0;
    while (x < q)
    {
        int v;
        cin >> v;
        int i = 0;
        int c = 0;
        while (c != v)
        {
            int f = 0;
            i++;
            for (int j = 0; j < n; j++)
            {
                if (i == b[j])
                {
                    f = 1;
                }
            }
            if (f == 0)
            {
                c++;
            }
        }
        a[x] = i;
        x++;
    }
    for (int i = 0; i < q; i++)
    {
        cout << a[i] << endl;
    }
}
