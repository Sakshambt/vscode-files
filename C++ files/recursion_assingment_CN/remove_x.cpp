#include <iostream>
using namespace std;

void removex(char c[])
{
    if (c[0] == '\0')
        return;
    if (c[0] == 'x')
    {
        int i;
        for (i = 1; c[i] != '\0'; i++)
        {
            c[i - 1] = c[i];
        }
        c[i - 1] = c[i];
        removex(c);
    }
    else
    {
        removex(c + 1);
    }
}

int main()
{
    char c[100];
    cin >> c;
    removex(c);
    cout << c << endl;
    return 0;
}