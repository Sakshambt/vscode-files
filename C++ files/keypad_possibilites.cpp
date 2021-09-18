#include <iostream>
#include <cstring>
using namespace std;

int keypad(int n, string *output, string *s)
{
    if (n == 0)
    {
        output[0] = s[0];
        return 1;
    }
    int num = n % 10;
    int count = keypad(n / 10, output, s);
    string f = s[num];
    int l = f.length();
    for (int j = l - 1; j >= 0; j--)
    {
        for (int i = 0; i < count; i++)
        {
            output[j * count + i] = output[i] + f[j];
        }
    }
    return count * l;
}

int main()
{
    string s[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int n;
    cin >> n;
    string *output = new string[1000];
    int c = keypad(n, output, s);
    for (int i = 0; i < c; i++)
    {
        cout << output[i] << endl;
    }
}