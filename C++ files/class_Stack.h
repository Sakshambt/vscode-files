#include <iostream>
using namespace std;
template <typename T>
class Stack
{
    T *data;
    int nextIndex;
    int capacity;

public:
    Stack()
    {
        data = new T[5];
        nextIndex = 0;
        capacity = 5;
    }

    void push(T element)
    {
        if (capacity == nextIndex)
        {
            T *newdata = new T[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newdata;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    void pop()
    {
        /*if (isEmpty())
        {
            return 0;
        }
        else
        {*/
        nextIndex--;

        //return data[nextIndex];
    }
    T top()
    {
        if (isEmpty())
        {
            return 0;
        }
        return data[nextIndex - 1];
    }
};