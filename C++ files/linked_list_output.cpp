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

Node *takeInput()
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

        /*
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }*/
        cin >> data;
    }
    return head;
}
int length(Node *head)
{
    n
        Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
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

void printNode(int i, Node *head)
{
    Node *temp = head;
    int count = 0;
    while (count < i)
    {
        temp = temp->next;
        count++;
    }
    cout << temp->data << endl;
}
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *nex = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return head;
}

Node *dltNode(int i, Node *head)
{
    Node *temp = head;
    if (i == 0)
    {
        temp = temp->next;
        return temp;
    }
    int count = 0;
    while (count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *dlt = temp->next;
    temp->next = dlt->next;
    delete dlt;
    return head;
}

int main()
{
    Node *head = takeInput();
    print(head);
    //cout << length(head) << endl;
    int i;
    //cin >> i;
    //printNode(i, head);
    cout << "delete ";
    cin >> i;
    Node *head1 = dltNode(i, head);
    print(head1);

    /*

    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(20);
    Node *node4 = new Node(20);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    print(node2);
    */
}