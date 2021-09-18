#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void add_star(char c[], string &output)
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
    string o = "";
    add_star(c, o);
    cout << o << endl;
    return 0;
}