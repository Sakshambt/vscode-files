#include <bits/stdc++.h>
#define Int long long
using namespace std;

struct sg_Node
{
    Int coef;
    Int pow;
    struct sg_Node *next;
};

void poly_func(Int x, Int y, struct sg_Node **t)
{
    struct sg_Node *r, *z;
    z = *t;
    if (z == NULL)
    {
        r = (struct sg_Node *)malloc(sizeof(struct sg_Node));
        r->coef = x;
        r->pow = y;
        *t = r;
        r->next = (struct sg_Node *)malloc(sizeof(struct sg_Node));
        r = r->next;
        r->next = NULL;
    }
    else
    {
        r->coef = x;
        r->pow = y;
        r->next = (struct sg_Node *)malloc(sizeof(struct sg_Node));
        r = r->next;
        r->next = NULL;
    }
}

void adding_both(struct sg_Node *p1, struct sg_Node *p2, struct sg_Node *poly)
{
    while (p1->next && p2->next)
    {
        if (p1->pow > p2->pow)
        {
            poly->pow = p1->pow;
            poly->coef = p1->coef;
            p1 = p1->next;
        }
        else if (p1->pow < p2->pow)
        {
            poly->pow = p2->pow;
            poly->coef = p2->coef;
            p2 = p2->next;
        }
        else
        {
            poly->pow = p1->pow;
            poly->coef = p1->coef + p2->coef;
            p1 = p1->next;
            p2 = p2->next;
        }
        poly->next = (struct sg_Node *)malloc(sizeof(struct sg_Node));
        poly = poly->next;
        poly->next = NULL;
    }
    while (p1->next || p2->next)
    {
        if (p1->next)
        {
            poly->pow = p1->pow;
            poly->coef = p1->coef;
            p1 = p1->next;
        }
        if (p2->next)
        {
            poly->pow = p2->pow;
            poly->coef = p2->coef;
            p2 = p2->next;
        }
        poly->next = (struct sg_Node *)malloc(sizeof(struct sg_Node));
        poly = poly->next;
        poly->next = NULL;
    }
}

void print(struct sg_Node *node)
{
    while (node->next != NULL)
    {
        cout << node->coef << "x^" << node->pow;
        node = node->next;
        if (node->coef >= 0)
        {
            if (node->next != NULL)
                cout << "+";
        }
    }
}

int main()
{
    struct sg_Node *p1 = NULL, *p2 = NULL, *result = NULL;

    poly_func(12, 3, &p1);
    poly_func(4, 2, &p1);
    poly_func(43, 1, &p1);
    poly_func(23, 0, &p1);

    poly_func(-5, 4, &p2);
    poly_func(-53, 1, &p2);

    cout << "1st  Number:  ";
    print(p1);
    cout << '\n';

    cout << "2nd  Number:  ";
    print(p2);
    cout << '\n';

    result = (struct sg_Node *)malloc(sizeof(struct sg_Node));

    adding_both(p1, p2, result);

    cout << "Resulted  Polynomial:  ";
    print(result);
    cout << '\n';
    return 0;
}
