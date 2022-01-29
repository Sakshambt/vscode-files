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

Node *mergelinklist(Node *h1, Node *h2)
{
    Node *fh = NULL;
    Node *ft = NULL;
    while (h1 != NULL && h2 != NULL)
    {
        if (fh == NULL)
        {
            if (h1->data <= h2->data)
            {
                fh = h1;
                ft = h1;
                h1 = h1->next;
            }
            else
            {
                fh = h2;
                ft = h2;
                h2 = h2->next;
            }
        }
        else
        {
            if (h1->data <= h2->data)
            {
                ft->next = h1;
                ft = h1;
                h1 = h1->next;
            }
            else
            {
                ft->next = h2;
                ft = h2;
                h2 = h2->next;
            }
        }
    }
    if (h1 != NULL)
    {
        ft->next = h1;
    }
    else
    {
        ft->next = h2;
    }
    return fh;
}

int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

Node *mid(Node *head)
{
    Node *temp = head;
    int count = length(head);
    int i;
    if (count % 2 != 0)
    {
        i = (count - 1) / 2;
    }
    else
    {
        i = (count - 2) / 2;
    }
    int c = 0;
    while (c < i)
    {
        temp = temp->next;
        c++;
    }
    return temp;
}

void merge_sort(Node **headref)
{
    Node *h1 = *headref;
    if (h1 == NULL || h1->next == NULL)
    {
        return;
    }
    Node *t1 = mid(h1);
    Node *h2 = t1->next;
    t1->next = NULL;

    merge_sort(&h1);
    merge_sort(&h2);

    *headref = mergelinklist(h1, h2);
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *reverse_ll(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *small_ll = reverse_ll(head->next);
    Node *temp = small_ll;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return small_ll;
}

int main()
{
    /*
    Node *h1 = input();
    Node *h2 = input();
    Node *merged = mergelinklist(h1, h2);
    print(merged);
    */
    Node *head = input();
    merge_sort(&head);
    print(head);
    print(reverse_ll(head));
}