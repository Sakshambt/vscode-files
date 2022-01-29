#include <iostream>
using namespace std;

class Queue
{
    int *data;
    int nextIndex;
    int frontIndex;
    int capacity;

public:
    Queue()
    {
        data = new int[4];
        nextIndex = 0;
        frontIndex = -1;
        capacity = 4;
    }

    void enqueue(int element)
    {
        if (nextIndex == capacity)
        {
            int *newdata = new int[2 * capacity];
            int j = 0;
            for (int i = frontIndex; i < capacity; i++)
            {
                newdata[j] = data[i];
                j++;
            }
            capacity *= 2;
            delete[] data;
            data = newdata;
            data[nextIndex] = element;
            nextIndex++;
        }
        else
        {
            if (nextIndex == 0 || frontIndex == -1)
            {
                data[nextIndex] = element;
                nextIndex++;
                frontIndex = 0;
            }
            else
            {
                data[nextIndex] = element;
                nextIndex++;
            }
        }
    }

    int dequeue()
    {
        if (nextIndex == 0)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        int value = data[frontIndex];
        frontIndex++;
        return value;
    }

    int front()
    {
        if (frontIndex == -1)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        return data[frontIndex];
    }

    int size()
    {
        if (nextIndex == 0)
        {
            return 0;
        }
        else
        {
            return nextIndex - frontIndex;
        }
    }

    bool isEmpty()
    {
        return frontIndex == -1;
    }
};