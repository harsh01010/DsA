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

/*
Check for Bst

approach 1: find maximum in left subtree and minimum in right subtree 
            current root value should be between these values.
    but it will have O(n^2) time complexity

approach 2:
pass a range for every node.
for root range is -inf to +inf 
for left child of fa node , in range we change upper bound as the node's value
for right child of a node , in range we change lower bound as the node's value.


approach 3:
A binary tree is binary search tree if and only if it's inorder traversal is sordted in increasing order.

*/


bool isBst(node*root,pair<int,int>range)
{
    if(root==NULL) return true;
    return (root->data > range.first && root->data < range.second)
                                &&
    ( isBst(root->left ,{range.first,root->data}) && isBst(root->right,{root->data,range.second}) );
}


int prv = INT_MIN;
bool is_Bst(node*root)
{
    if(root==NULL) return true;
    // we have to check inorder traversal
    if(!is_Bst(root->left)) return false;
    if(root->data <= ::prv) return false;
    prv = root->data;
    return is_Bst(root->right);
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

    
    return 0;
}
