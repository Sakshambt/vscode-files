#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check_bracket_balance(string s)
{
    stack<char> ch;
    char f;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            ch.push(s[i]);
            continue;
        }

        if (ch.empty())
            return false;

        switch (s[i])
        {
        case ')':

            f = ch.top();
            ch.pop();
            if (f == '{' || f == '[')
                return false;
            break;

        case '}':

            f = ch.top();
            ch.pop();
            if (f == '(' || f == '[')
                return false;
            break;

        case ']':

            f = ch.top();
            ch.pop();
            if (f == '(' || f == '{')
                return false;
            break;
        }
    }

    //check whether stack is empty
    return (ch.empty());
}

int main()
{
    string s;
    getline(cin, s);

    if (check_bracket_balance(s))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
