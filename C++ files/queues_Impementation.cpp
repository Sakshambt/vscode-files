#include <iostream>
using namespace std;

class CircularQueue
{
    int *elementstored;
    int front;
    int back;
    int capacity;

public:
    CircularQueue(int s) //constructor with one argument
    {
        elementstored = new int[s];
        front = -1;
        back = -1;
        capacity = s;
    }
    // To check whether queue is empty or not
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }
    //To check whether queue is full or not
    bool isFull()
    {
        if ((front == 0 && back == capacity - 1) || front == back + 1)
        {
            return true;
        }
        return false;
    }
    // To insert an Element
    void push(int element)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
        }
        back = (back + 1) % capacity;
        elementstored[back] = element;
        cout << "Element " << element << " inserted" << endl;
    }
    //To remove element
    int pop()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        int ans = elementstored[front];
        if (front == back)
        {
            front = -1;
            back = -1;
        }
        else
        {
            front = (front + 1) % capacity;
        }
        return ans;
    }
    // Print circular queue
    void print()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Front index " << front << endl;
        int index;
        for (index = front; index != back; index = (index + 1) % capacity)
        {
            cout << elementstored[index] << " ";
        }
        cout << elementstored[index] << endl;
        cout << "last index " << back << endl;
    }
};

int main()
{
    CircularQueue q(3); //calling a Queue
    q.pop();            // empty print
    q.push(1);          //Adding element
    q.push(2);          //Adding element
    q.push(3);          //Adding element
    q.push(4);          //return Queue is full

    q.print();

    int del = q.pop(); //remove element
    if (del != -1)
    {
        // To print del element
        cout << "Deleted Element: " << del << endl;
    }
    return 0;
}
