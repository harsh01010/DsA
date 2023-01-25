#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

int x(Node *root) // this function is similar to height of the binary tree function
{
    if (root == NULL)
        return 0;
    int l = x(root->left);
    if (l == -1)
        return -1;
    int r = x(root->right);
    if (r == -1)
        return -1;
    if (abs(l - r) > 1)
        return -1;
    return max(l + 1, r + 1);
}

bool y(Node *root)
{
    return x(root) != -1;
}

int main()
{

    Node *root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);

    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);
    root->left->right->left = new Node(100);
    root->right->right->right = new Node(1);

    // int x = Func(root);

    // cout << x << "\n";

    cout << x(root) << "\n";

    return 0;
}