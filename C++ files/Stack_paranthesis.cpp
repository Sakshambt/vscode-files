#include <iostream>
using namespace std;
#include "class_Stack.h"

int main()
{
    string s;
    cin >> s;
    int flag = 1;
    Stack<char> p;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            p.push(')');
        }
        else if (s[i] == '{')
        {
            p.push('}');
        }
        else if (s[i] == '[')
        {
            p.push(']');
        }

        if (s[i] == ')')
        {
            if (p.top() != ')')
            {
                flag = 0;
            }
            else
            {
                p.pop();
            }
        }
        else if (s[i] == '}')
        {
            if (p.top() != '}')
            {
                flag = 0;
            }
            else
            {
                p.pop();
            }
        }
        else if (s[i] == ']')
        {
            if (p.top() != ']')
            {
                flag = 0;
            }
            else
            {
                p.pop();
            }
        }
    }
    if (flag == 1 && p.size() == 0)
    {
        cout << "balanced" << endl;
    }
    else
    {
        cout << "not balanced" << endl;
    }
}