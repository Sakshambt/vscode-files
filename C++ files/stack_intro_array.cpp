#include <iostream>
#include <climits>
using namespace std;

#include "class_stackll.h"
/*class Stack
{
    int *data;
    int nextIndex;
    int capacity;

public:
    Stack(int totalsize)
    {
        data = new int[totalsize];
        nextIndex = 0;
        capacity = totalsize;
    }
    Stack()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        if (nextIndex == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        //return nextIndex == 0;
    }

    void push(int element) //dynamic array
    {
        if (nextIndex == capacity)
        {
            int *neData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                neData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = neData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};*/

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
}