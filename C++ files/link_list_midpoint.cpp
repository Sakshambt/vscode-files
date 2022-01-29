#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *input()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

int specificNode(int i, Node *head)
{
    int count = 0;
    Node *temp = head;
    while (count < i)
    {
        temp = temp->next;
        count++;
    }
    return temp->data;
}

int mid(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (count == 0)
    {
        return -1;
    }
    int i;
    if (count % 2 != 0)
    {
        i = (count - 1) / 2;
    }
    else
    {
        i = (count - 2) / 2;
    }
    int midvalue = specificNode(i, head);
    return midvalue;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = input();
        int value = mid(head);
        cout << value << endl;
    }
}