#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *nextAddress;

    //Constructor
    Node(int data)
    {
        this->data = data;
        this->nextAddress = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->nextAddress;
    }
    cout << endl;
}

int length(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->nextAddress;
    }
    return count;
}

Node *insertNode(Node *head, int index, int data)
{
    if (head == NULL)
    {
        if (index == 0)
        {
            Node *newnode = new Node(data);
            return newnode;
        }
        return head;
    }
    Node *newnode = new Node(data);
    if (index == 0)
    {
        newnode->nextAddress = head;
        head = newnode;
        return head;
    }
    head->nextAddress = insertNode(head->nextAddress, index - 1, data);
    return head;
}

Node *deleteNode(Node *head, int index)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (index == 0)
    {
        head = head->nextAddress;
        return head;
    }
    head->nextAddress = deleteNode(head->nextAddress, index - 1);
    return head;
}

int main()
{
    Node *n1 = new Node(10);
    Node *head1 = n1;
    Node *n2 = new Node(20);
    n1->nextAddress = n2;
    Node *n3 = new Node(30);
    n2->nextAddress = n3;
    Node *n4 = new Node(40);
    n3->nextAddress = n4;
    Node *n5 = new Node(50);
    n4->nextAddress = n5;
    Node *n6 = new Node(60);
    n5->nextAddress = n6;

    cout << "Length of Link list: " << length(head1) << endl;

    print(head1);

    insertNode(head1, 4, 70);

    print(head1);

    deleteNode(head1, 5);

    print(head1);
}
