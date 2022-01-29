#include <iostream>
using namespace std;
#include "class_Tree.h"

void printTree(TreeNode<int> *root)
{
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

TreeNode<int> *takeinput()
{
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
}

int main()
{
}