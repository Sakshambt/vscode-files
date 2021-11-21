#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

class stack
{
    int index;
    int capacity;
    int *elementStored;

public:
    stack(int totalSize)
    {
        elementStored = new int[totalSize];
        index = 0;
        capacity = totalSize;
    }

    // number of elements in stack
    int size()
    {
        return index;
    }

    // To check whether our stack is empty
    bool isEmpty()
    {
        return index == 0;
    }

    //To insert an element
    void push(int element)
    {
        if (index == capacity)
        {
            cout << "Stack is full cannot push" << endl;
            return;
        }
        elementStored[index] = element;
        index++;
    }

    //To delete an element
    int pop()
    {
        if (isEmpty())
        {
            return INT_MIN;
        }
        index--;
        return elementStored[index];
    }

    //element at top
    int top()
    {
        if (isEmpty())
        {
            return INT_MIN;
        }
        return elementStored[index - 1];
    }
};

// to check if the input character
// is an operator or a '('
int isOperator(char input)
{
    switch (input)
    {
    case '+':
        return 1;
    case '-':
        return 1;
    case '*':
        return 1;
    case '%':
        return 1;
    case '/':
        return 1;
    case '(':
        return 1;
    }
    return 0;
}

// to check if the input character is an operand
int isOperand(char input)
{
    if (input >= 65 && input <= 90 || input >= 97 && input <= 122)
        return 1;
    return 0;
}

// function to return precedence value
// if operator is present in stack
int inPrec(char input)
{
    switch (input)
    {
    case '+':
    case '-':
        return 2;
    case '*':
    case '%':
    case '/':
        return 4;
    case '(':
        return 0;
    }
    return 0;
}

// function to return precedence value
// if operator is present outside stack.
int outPrec(char input)
{
    switch (input)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '%':
    case '/':
        return 3;
    case '(':
        return 100;
    }
    return 100;
}

// function to convert infix to postfix
void inToPost(string input)
{
    stack s(1000);

    // while input is not NULL iterate
    int i = 0;
    while (input[i] != '\0')
    {

        // if character an operand
        if (isOperand(input[i]))
        {
            cout << input[i] << "";
        }

        // if input is an operator, push
        else if (isOperator(input[i]))
        {
            if (s.isEmpty() || outPrec(input[i]) > inPrec(s.top()))
                s.push(input[i]);
            else
            {
                while (!s.isEmpty() && outPrec(input[i]) < inPrec(s.top()))
                {
                    cout << (char)s.top() << "";
                    s.pop();
                }
                s.push(input[i]);
            }
        }

        // condition for opening bracket
        else if (input[i] == ')')
        {
            while (s.top() != '(')
            {
                cout << (char)s.top() << "";
                s.pop();

                // if opening bracket not present
                if (s.isEmpty())
                {
                    cout << "Wrong input" << endl;
                    exit(1);
                }
            }

            // pop the opening bracket.
            s.pop();
        }
        i++;
    }

    // pop the remaining operators
    while (!s.isEmpty())
    {
        if (s.top() == '(')
        {
            cout << "\n Wrong input\n"
                 << endl;
            exit(1);
        }
        cout << (char)s.top() << "";
        s.pop();
    }
}

int main()
{
    string sg;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> sg;
        inToPost(sg);
        cout << endl;
    }
    return 0;
}
