#include <iostream>
using namespace std;
#include <string.h>

int num(string input, int n, string output[])
{
    if (n == 1)
    {
        output[0] == input[n];
        return 1;
    }
    int var = num(input, n - 1, output);
    string s = output[var - 1];
    if (s.length() == 1)
    {
        s = s + input(n - 1);
        output[var - 1] == s;
    }
}