#include <bits/stdc++.h>
using namespace std;

class SG_Node
{
public:
    int row, col, data;
    SG_Node *next;
};

void create_new_node(SG_Node **p, int row_index, int col_index, int x)
{
    SG_Node *helping_node = *p;
    SG_Node *helper;
    if (helping_node == NULL)
    {
        helping_node = new SG_Node();
        helping_node->row = row_index;
        helping_node->col = col_index;
        helping_node->data = x;
        helping_node->next = NULL;
        *p = helping_node;
    }
    else
    {
        while (helping_node->next != NULL)
            helping_node = helping_node->next;

        helper = new SG_Node();
        helper->row = row_index;
        helper->col = col_index;
        helper->data = x;
        helper->next = NULL;
        helping_node->next = helper;
    }
}

void print(SG_Node *s)
{
    SG_Node *ptr_helper = s;
    cout << "row_indexes:";
    while (ptr_helper != NULL)
    {
        cout << ptr_helper->row << "  ";
        ptr_helper = ptr_helper->next;
    }
    cout << endl;
    cout << "col_indexes:";

    ptr_helper = s;
    while (ptr_helper != NULL)
    {
        cout << ptr_helper->col << "  ";
        ptr_helper = ptr_helper->next;
    }
    cout << endl;
    cout << "Non_Zero_Values:";
    ptr_helper = s;

    while (ptr_helper != NULL)
    {
        cout << ptr_helper->data << "  ";
        ptr_helper = ptr_helper->next;
    }
}

int main()
{
    int matrix[6][4] = {

        {0, 0, 3, 0},
        {0, 4, 5, 0},
        {0, 0, 1, 0},
        {0, 2, 0, 0},
        {3, 0, 3, 0},
        {0, 5, 4, 0}};

    SG_Node *first = NULL;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] != 0)
            {
                create_new_node(&first, i, j, matrix[i][j]);
            }
        }
    }
    print(first);

    return 0;
}
