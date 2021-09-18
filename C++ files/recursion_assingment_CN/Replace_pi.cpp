#include <iostream>
#include <cstring>
using namespace std;

string replacepi(char s[], string o)
{
    if (s[0] == '\0')
        return o;
    if (s[0] == 'p' & s[1] == 'i')
    {
        o = o + "3.14";
        return replacepi(s + 2, o);
    }
    else
    {
        o = o + s[0];
        return replacepi(s + 1, o);
    }
}

int main()
{
    char s[100];
    string o = "";
    cin >> s;
    cout << replacepi(s, o) << endl;
    return 0;
}