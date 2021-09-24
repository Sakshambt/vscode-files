#include <iostream>
#include <string>
#include <climits>
#include <string>
using namespace std;

template <class T>
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
        cout << "Element " << element << " Inserted" << endl;
        index++;
    }
    //To delete an element
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
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
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        return elementStored[index - 1];
    }
};

int main()
{
    stack<int> s(3); //calling stack name s
    s.pop();         // stack is empty
    s.top();         // stack is empty
    s.push(1);       // Push element
    s.push(11);      // Push element
    s.push(2);       // Push element
    s.push(13);      //stack is full
    int deleted = s.pop();
    if (deleted != INT_MIN)
    {
        cout << "Element " << deleted << " deleted" << endl;
    }
    cout << s.top() << endl;
    cout << s.isEmpty() << endl;
}