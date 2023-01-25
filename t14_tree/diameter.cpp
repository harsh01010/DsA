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
int height(node *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

// the diameter of binary tree will be max of (left height + right height +1) of all the nodes.

/*
method 1:
calculate (left height + right height +1) for each node and find the maximum value
this approach has time complexity of O(n^2)
*/

int diameter(node *root)
{
    if (root == NULL)
        return 0;
    int d = height(root->left) + height(root->right) + 1;
    int l = diameter(root->left);
    int r = diameter(root->right);
    return max(d, max(l, r));
}

/*
method 2:
use above method , but insted of calculating the height each time , just precompute it.
use unordered_map<node*,int>
*/

unordered_map<node *, int> ht;

void precompute(node *root)
{
    if (root == NULL)
    {
        ht[root] = 0;
        return;
    }
    ht[root] = height(root);
    precompute(root->left);
    precompute(root->right);
}

int compute(node *root)
{
    if (root == NULL)
        return 0;
    int d = ht[root->left] + ht[root->right] + 1;
    int l = compute(root->left);
    int r = compute(root->right);

    return max(d, max(l, r));
}

int diameter2(node *root)
{
    precompute(root);
    return compute(root);
}

/*
method 3:
remove the overhead caused by the map in the above solution.
just modify the height function.
*/
int ans = 0;
int diameter3(node *root)
{
    if (root == NULL)
        return 0;
    int x = diameter3(root->left);
    int y = diameter3(root->right);
    ans = max(ans, x + y + 1);
    return max(x + 1, y + 1);
}

int main()
{
    node *root = new node(10);
    root->right = new node(20);
    root->left = new node(30);
    root->left->left = new node(40);
    root->left->left->left = new node(50);
    root->left->left->right = new node(60);
    root->left->right = new node(70);
    root->left->right->right = new node(80);
    root->left->right->right->right = new node(90);
    cout << "pass\n";
    int ans = diameter(root);
    cout << "pass\n";
    int ans2 = diameter2(root);
    cout << "pass\n";
    diameter3(root);
    cout << "pass\n";
    int ans3 = ::ans;
    cout << ans << "\n"
         << ans2 << "\n"
         << ans3 << "\n";

    return 0;
}
