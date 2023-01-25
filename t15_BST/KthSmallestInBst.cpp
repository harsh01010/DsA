#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node
{
    int data;
    node *right;
    node *left;
    node(int x)
    {
        data = x;
        right = left = nullptr;
    }
};

void traverse(node *root)
{
    if (!root)
        return;
    traverse(root->left);
    cout << root->data << " ";
    traverse(root->right);
}

// kth smallest in bst

int count = 0;
node *f(node *root, int k)
{
    if (root == NULL)
        return NULL;
    node *temp = f(root->left, k);
    if (temp != NULL)
        return temp;
    ::count++;
    if (::count == k)
        return root;
    return f(root->right, k);
}
int kthSmallest(node *root, int k)
{
    node *res = f(root, k);
    if (res == NULL)
        return -1;
    else
        return res->data;
/*this solution has O(h+k) time complexity , it  can be optimized to O(h) by modifying structure of bst to augmented bst.*/
}

struct AugNode{
    int data;
    AugNode*left;
    AugNode*right;
    int lcount; // idea is to store count of nodes in the left subtree for every node
    AugNode(int x)
    {
        data = x;
        left = right =NULL;
        lcount = 0; 
    }
}

int main()
{

    node *root = new node(20);
    root->left = new node(15);
    root->right = new node(30);
    root->left->left = new node(12);
    root->left->right = new node(18);
    root->right->right = new node(40);
    root->left->left->left = new node(7);
    root->right->right->left = new node(35);
    root->right->right->right = new node(50);
    root->right->right->right->right = new node(80);
    /*
                            20
                           /   \
                          15    30
                        /  \       \
                      12   18       40
                      /             /  \
                     7             35   50
                                          \
                                           80
    */

    int k = 3;
    int ans = kthSmallest(root, k);
    cout << ans << "\n";

    return 0;
}
