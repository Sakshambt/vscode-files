#include <iostream>
using namespace std;

class DoubleEndQueue
{
    int *data;
    int front;
    int rear;
    int size;

public:
    //constructor
    DoubleEndQueue(int size)
    {
        data = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    //Checking  if  queue  is  full
    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || front == rear + 1)
        {
            return true;
        }
        return false;
    }
    //checking  if  the  queue  is  empty
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }
    //pushing  element  in  the  front
    void pushfront(int element)
    {
        if (isFull())
        {
            cout << "Queue is Full" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (front == 0)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        data[front] = element;
        cout << "Inserted element to front:  " << element << endl;
    }
    //pushing  element  is  the  back
    void pushback(int element)
    {
        if (isFull())
        {
            cout << "Queue is Full" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        data[rear] = element;
        cout << "Inserted element to back:  " << element << endl;
    }
    //deleting  the  first  element
    void popfront()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    //deleteing  the  last  element
    void popback()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
    }
    //To get data at index front
    int getfront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return data[front];
    }
    //to get data at index back
    int getback()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return data[rear];
    }
};

int main()
{
    DoubleEndQueue Queue_ob(5);
    Queue_ob.getfront();                 //it is empty
    Queue_ob.getback();                  //it is empty
    cout << Queue_ob.isEmpty() << endl;  //check id the queue is empty or not
    Queue_ob.pushfront(10);              //Adding the element
    Queue_ob.pushfront(12);              //Adding the element
    Queue_ob.pushfront(17);              //Adding the element
    Queue_ob.pushback(34);               //Adding the element
    Queue_ob.pushback(22);               //Adding the element
    Queue_ob.pushback(14);               //the queue is now full element not added
    Queue_ob.isFull();                   //it will return true as queue is full
    cout << Queue_ob.getback() << endl;  //return element from back
    Queue_ob.popback();                  //it will delete the element from last
    cout << Queue_ob.getfront() << endl; //return element from front
    Queue_ob.popback();                  //it will delte the element from front
}
