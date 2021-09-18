#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int stringtoint(char c[], int n)
{
    if (n == 0)
        return 0;

    int i = stringtoint(c, n - 1);

    i = i * 10 + (c[n - 1] - '0');
    return i;
}
void add_star(char c[], string output)
{
    if (c[0] == '\0')
        return;
    if (c[0] == c[1])
    {
        output = output + c[0] + "*";
    }
    else
    {
        output = output + c[0];
    }
    add_star(c + 1, output);
    return;
}

int main()
{
    char c[100];
    cin >> c;
    cout << stringtoint(c, strlen(c));
    return 0;
}