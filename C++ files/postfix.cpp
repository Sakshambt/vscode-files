#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode *takeinputLevelWise()
{
    int data;
    cout << "Enter Root : " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    BinaryTreeNode *root = new BinaryTreeNode(data);
    queue<BinaryTreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode *curr = q.front();
        q.pop();

        int ldata;
        cout << "Enter left node of " << curr->data << " : " << endl;
        cin >> ldata;
        if (ldata != -1)
        {
            BinaryTreeNode *lnode = new BinaryTreeNode(ldata);
            curr->left = lnode;
            q.push(lnode);
        }
        else
        {
        }

        curr->left = NULL;

        int rdata;
        cout << "Enter right node of " << curr->data << " : " << endl;
        cin >> rdata;
        if (rdata != -1)
        {
            BinaryTreeNode *rnode = new BinaryTreeNode(rdata);
            curr->right = rnode;
            q.push(rnode);
        }
        else
        {
        }

        curr->right = NULL;
    }

    return root;
}

void BFS(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ' ';
    queue<BinaryTreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode *curr = q.front();
        q.pop();
        if (curr->left != NULL)
        {
            q.push(curr->left);
            cout << curr->left->data << ' ';
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
            cout << curr->right->data << ' ';
        }
    }

    return;
}

void preorder(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

    return;
}

void inorder(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
    return;
}

void postorder(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);

    postorder(root->right);
    cout << root->data << ' ';
    return;
}

int main()
{
    BinaryTreeNode *root = takeinputLevelWise();
    cout << "BFS : ";
    BFS(root);
    cout << endl;
    cout << "PreOrder : ";
    preorder(root);
    cout << endl;
    cout << "InOrder : ";
    inorder(root);
    cout << endl;
    cout << "PostOrder : ";
    postorder(root);
    cout << endl;
    return 0;
}
