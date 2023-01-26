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



node*insert(node*root,int x)
{
    if(root==NULL) return new node(x);
    if(root->data > x)
        root->left = insert(root->left,x);
    if(root->data < x)
        root->right = insert(root->right,x);

    return root;
}

int main()
{

    // node *root = new node(20);
    // root->left = new node(15);
    // root->right = new node(30);
    // root->left->left = new node(12);
    // root->left->right = new node(18);
    // root->right->right = new node(40);
    // root->left->left->left = new node(7);
    // root->right->right->left = new node(35);
    // root->right->right->right = new node(50);
    // root->right->right->right->right = new node(80);
    // /*
    //                         20
    //                        /   \
    //                       15    30
    //                     /  \       \
    //                   12   18       40
    //                   /             /  \
    //                  7             35   50
    //                                       \
    //                                        80
    // */

    return 0;
}
