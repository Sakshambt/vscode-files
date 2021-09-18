#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void print_subsequence(string s, int i, string path, int j, string output[])
// {
//     if (i == s.length())
//     {
//         cout << path << endl;
//         output[j] = path;
//         j++;
//         return;
//     }
//     print_subsequence(s, i + 1, s[s.length() - i - 1] + path, j, output);
//     print_subsequence(s, i + 1, path, j, output);
// }

int sub(string s, string o[])
{
    if (s.empty())
    {
        o[0] = "";
        return 1;
    }

    string small = s.substr(1);
    int subo = sub(small, o);
    for (int i = 0; i < subo; i++)
    {
        o[subo + i] = s[0] + o[i];
    }
    return 2 * subo;
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    string *output = new string[int(pow(2, n)) + 1];
    //print_subsequence(s, 0, "", 0, output);
    int c = sub(s, output);
    for (int i = 0; i < c; i++)
    {
        cout << output[i] << endl;
    }
}