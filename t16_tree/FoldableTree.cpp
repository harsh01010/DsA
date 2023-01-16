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

bool fun(node*x,node*y)
{
    if(x==y==NULL) return true;
    if(x==NULL|| y==NULL) return false;

    /*      10
           /  \ 
          20    40
          \      /
           30   70
           for foldable:
    if left -> right
    if right -> left 
    */
return fun(x->right,y->left) && fun(x->left,y->right);
}

bool Foldable(node*root)
{
    if(root==NULL) return true;
    return Fun(root->left,root->right);
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

    /*
                              10
                           /     \
                         30       20
                      /    \
                    40      70
                   /  \      \
                50     60     80
                               \
                                90
    */
    return 0;
}
