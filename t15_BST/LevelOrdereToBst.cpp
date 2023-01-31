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

// levelorder to BST
node *createBst(int arr[], int n)
{
    if (n == 0)
        return NULL;
    node *root = new node(arr[0]);
    queue<pair<node *, pair<int, int>>> q;
    q.push({root, {INT_MIN, INT_MAX}});
    int i = 1;
    for (; i <= n - 1; i++)
    {
        node *temp = q.front().first;
        pair<int, int> p = q.front().second;
        if (arr[i] > p.first && arr[i] < p.second)
        {
            if (arr[i] < temp->data)
            {
                temp->left = new node(arr[i]);
                q.push({temp->left, {p.first, temp->data}});
            }
            else
            {
                q.pop(); // this is important
                temp->right = new node(arr[i]);
                q.push({temp->right, {temp->data, p.second}});
            }
        }
        else
        {
            i--; // this is important
            q.pop();
        }
    }
    return root;
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