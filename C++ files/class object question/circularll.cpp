#include <bits/stdc++.h>
#define more_storage long long int
using namespace std;

struct Saksham_circular_Node
{
    more_storage data;
    struct Saksham_circular_Node *next;
};

more_storage length(Saksham_circular_Node *Saksham)
{
    Saksham_circular_Node *temp = Saksham;
    more_storage result = 0;
    if (Saksham != NULL)
    {
        do
        {
            temp = temp->next;
            result++;
        } while (temp != Saksham);
    }
    return result;
}

struct Saksham_circular_Node *insertWhenEmpty(struct Saksham_circular_Node *last, more_storage data)
{
    if (last != NULL)
        return last;
    struct Saksham_circular_Node *temp = (struct Saksham_circular_Node *)malloc(sizeof(struct Saksham_circular_Node));
    temp->data = data;
    last = temp;
    last->next = last;
    return last;
}

struct Saksham_circular_Node *insert_at_start(struct Saksham_circular_Node *last, more_storage data)
{
    if (last == NULL)
        return insertWhenEmpty(last, data);

    struct Saksham_circular_Node *temp =
        (struct Saksham_circular_Node *)malloc(sizeof(struct Saksham_circular_Node));

    temp->data = data;
    temp->next = last->next;
    last->next = temp;

    return last;
}

struct Saksham_circular_Node *inserttotheEnd(struct Saksham_circular_Node *last, int data)
{
    if (last == NULL)
        return insertWhenEmpty(last, data);

    struct Saksham_circular_Node *temp = (struct Saksham_circular_Node
                                              *)malloc(sizeof(struct Saksham_circular_Node));

    temp->data = data;
    temp->next = last->next;
    last->next = temp;
    last = temp;

    return last;
}

struct Saksham_circular_Node *insert_After(struct Saksham_circular_Node *last, more_storage data, more_storage item)
{
    if (last == NULL)
        return NULL;

    struct Saksham_circular_Node *temp, *p;
    p = last->next;
    do
    {
        if (p->data == item)
        {
            temp = (struct Saksham_circular_Node *)malloc(sizeof(struct Saksham_circular_Node));
            temp->data = data;
            temp->next = p->next;
            p->next = temp;

            if (p == last)
                last = temp;
            return last;
        }
        p = p->next;
    } while (p != last->next);

    cout << item << "  not  present  in  the  list." << '\n';
    return last;
}

void delete_from_begin(struct Saksham_circular_Node **Saksham)
{
    struct Saksham_circular_Node *prev = *Saksham, *next = *Saksham;
    if (*Saksham == NULL)
    {
        printf("\nList  is  empty\n");
        return;
    }
    if (prev->next == prev)
    {
        *Saksham = NULL;
        return;
    }
    while (prev->next != *Saksham)
    {

        prev = prev->next;
        next = prev->next;
    }
    prev->next = next->next;
    *Saksham = prev->next;
    free(next);

    return;
}
void delete_from_last(struct Saksham_circular_Node **Saksham)
{
    struct Saksham_circular_Node *temppp = *Saksham, *temp = *Saksham, *prev;
    if (*Saksham == NULL)
    {
        printf("\nList  is  empty\n");
        return;
    }
    if (temppp->next == temppp)
    {
        *Saksham = NULL;
        return;
    }
    while (temppp->next != *Saksham)
    {
        prev = temppp;
        temppp = temppp->next;
    }

    prev->next = temppp->next;
    *Saksham = prev->next;
    free(temppp);

    return;
}

void delete_at_given_pos(struct Saksham_circular_Node **Saksham, more_storage index)
{
    more_storage len = length(*Saksham);
    more_storage count = 1;
    struct Saksham_circular_Node *prev = *Saksham, *next = *Saksham;
    if (*Saksham == NULL)
    {
        cout << "List  is  Empty" << '\n';
        return;
    }
    if (index >= len || index < 0)
    {
        cout << "List  is  not  empty" << '\n';
        return;
    }
    if (index == 0)
    {
        delete_from_begin(Saksham);
        return;
    }
    while (len > 0)
    {
        if (index == count)
        {
            prev->next = next->next;
            free(next);
            return;
        }
        prev = prev->next;
        next = prev->next;
        len--;
        count++;
    }
    return;
}

void showing(struct Saksham_circular_Node *last)
{
    struct Saksham_circular_Node *p;
    if (last == NULL)
    {
        return;
    }
    p = last->next;
    do
    {
        cout << p->data << "  ";
        p = p->next;
    } while (p != last->next);
}

int main()
{
    struct Saksham_circular_Node *Saksham = NULL;

    Saksham = insertWhenEmpty(Saksham, 6);
    Saksham = insert_at_start(Saksham, 4);
    Saksham = insert_at_start(Saksham, 2);
    Saksham = inserttotheEnd(Saksham, 8);
    Saksham = inserttotheEnd(Saksham, 12);
    Saksham = insert_After(Saksham, 10, 8);

    cout << "Circular  Linked  list:  ";
    showing(Saksham);
    cout << '\n';
    cout << "length:  " << length(Saksham) << '\n';

    Saksham = inserttotheEnd(Saksham, 24);
    Saksham = insert_at_start(Saksham, 100);
    cout << "Circular  Linked  list:  ";
    showing(Saksham);
    cout << '\n';
    cout << "length:  " << length(Saksham) << '\n';

    delete_from_begin(&Saksham);
    delete_from_last(&Saksham);
    cout << "Circular  Linked  list:  ";
    showing(Saksham);
    cout << '\n';
    cout << "length:  " << length(Saksham) << '\n';

    delete_at_given_pos(&Saksham, 4);
    cout << "Circular  Linked  list:  ";
    showing(Saksham);
    cout << '\n';
    cout << "length:  " << length(Saksham) << '\n';

    return 0;
}
