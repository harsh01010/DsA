#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int prind = 0;
node *treeFromIP(int inr[], int pr[], int s, int e)
{
    if (s > e)
        return NULL;
    node *root = new node(pr[prind++]);
    int i = s;
    for (; i <= e; i++)
    {
        if (inr[i] == root->data)
            break;
    }
    root->left = treeFromIP(inr, pr, s, i - 1);
    root->right = treeFromIP(inr, pr, i + 1, e);

    return root;
}

void trIn(node *root)
{
    if (root == NULL)
        return;
    trIn(root->left);
    cout << root->data << " ";
    trIn(root->right);
}

int i=0;

node *func(int in[], int post[], int s, int e)
{
    if (s > e)
        return NULL;
    node *root = new node(post[i++]);
    int j = s;
    for (; j <= e; j++)
    {
        if (in[j] == root->data)
            break;
    }
    root->left = func(in, post, s, j - 1);
    root->right = func(in, post, j + 1, e);

    return root;
}
node *buildTree(int in[], int post[], int n)
{
    // Your code here

    reverse(post,post+n);
    return func(in, post, 0, n - 1);
}

int main()
{
    int n;
    cout << "enter total number of elements in the tree\n";
    cin >> n;
    int inr[n], pr[n];
    cout << "enter the inorder traversal of the tree\n";
    for (auto &it : inr)
        cin >> it;
    cout << "enter the preorder traversal of the tree\n";
    for (auto &it : pr)
        cin >> it;

    // node*root = treeFromIP(inr,pr,0,n-1);
    // cout<<"the inorder traversal of the created tree  is:\n";
    node *root = buildTree(inr, pr, n);
    if (root)
        trIn(root);
    cout << "\n";

    return 0;
}