#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

void Insert_front(Node **head, int element)
{
    Node *newNode = new Node();
    newNode->data = element;
    newNode->next = *head;
    newNode->prev = NULL;

    if (*head != NULL)
    {
        (*head)->prev = newNode;
    }
    *head = newNode;
}

void append(Node **head, int element)
{
    Node *newNode = new Node();
    Node *last = *head;

    newNode->data = element;
    newNode->next = NULL;

    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = newNode;
    newNode->prev = last;

    return;
}

int length(Node *node)
{
    int l = 0;
    while (node != NULL)
    {
        l++;
        node = node->next;
    }
    return l;
}

void deleteNode(Node **head, Node *del)
{
    if (*head == NULL || del == NULL)
        return;
    if (*head == del)
        *head = del->next;

    if (del->next != NULL)
        del->next->prev = del->prev;

    if (del->prev != NULL)
        del->prev->next = del->next;

    free(del);
}

void deleteNodeAt(Node **head, int n)
{
    /* if list in NULL or invalid position is given */
    if (*head == NULL || n <= 0)
        return;

    Node *current = *head;
    int i;
    for (int i = 1; current != NULL && i < n; i++)
        current = current->next;

    if (current == NULL)
        return;

    deleteNode(head, current);
}

void display(Node *node)
{
    Node *last;
    cout << "Traversal in forward direction " << endl;
    while (node != NULL)
    {
        cout << " " << node->data << " ";
        last = node;
        node = node->next;
    }
    cout << endl;

    cout << "Traversal in reverse direction" << endl;
    while (last != NULL)
    {
        cout << " " << last->data << " ";
        last = last->prev;
    }
    cout << endl;
}

int main()
{
    Node *h = NULL;
    append(&h, 10);
    Insert_front(&h, 5);
    append(&h, 20);
    append(&h, 30);
    display(h);
    append(&h, 40);
    append(&h, 50);
    Insert_front(&h, 1);
    display(h);
    cout << "length of Double Linked List: " << length(h) << endl;
    deleteNodeAt(&h, 2);
    display(h);
    deleteNodeAt(&h, 1);
    display(h);
    cout << "length of Double Linked List: " << length(h) << endl;
}