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

// check if a given tree is a subtree of a given tree.
// given : S , T , check if S is subtree of T

bool identical(node*s , node*t)
{
    if(s==NULL and t==NULL) return true;
    if(s==NULL) return false;
    if(s==NULL) return false;

    return(s->data == t->data and identical(s->left,t->left) and identical(s->right,t->right));
}

bool isSubtree(node*s,node*t)
{
    if(s==NULL) return true;
    if(t==NULL) return false;
    if(identical(s,t)) return true; // if trees are exactly same.
    return isSubtree(s,t->left) || isSubtree(s,t->right);
}

/*
this soultion has O(n*m) time complexity , where n and m are nubmer of nodes in both trees.
this problem has also an O(n) time complexity , but i'm still figuring it out 🤦‍♂️
*/
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
