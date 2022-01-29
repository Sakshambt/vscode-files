#include <iostream>
using namespace std;
#include "Queue_intro.cpp"

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << q.dequeue() << endl;
    q.enqueue(60);
    q.enqueue(70);
    cout << q.front() << endl;
    cout << q.size() << endl;
    cout << q.dequeue() << endl;
    cout << q.isEmpty() << endl;
}