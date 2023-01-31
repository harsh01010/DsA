#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
// use algorithm like tree from inorder and preorder
int ind;
node *f(int arr[], int s, int e)
{
    if (ind > e)
        return NULL;
    node *root = new node(arr[ind++]);
    int i = s;
    for (; i <= e; i++)
    {
        if (arr[i] > root->data)
            break;
    }
    root->left = f(arr, ind, i - 1);
    root->right = f(arr, i, e);

    return root;
}

node *createBst(int arr[], int n)
{
    ind = 0;
    return f(arr, 0, n - 1);
}

void traverse(node *root)
{
    if (!root)
        return;
    traverse(root->left);
    cout << root->data << " ";
    traverse(root->right);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &it : arr)
        cin >> it;
    traverse(createBst(arr, n));
    return 0;
}