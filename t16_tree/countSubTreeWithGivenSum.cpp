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

/*
 total number of subtree with given sum

 evaluate left sum + right sum (if exists) + self value for each vertex.
 if it matches with the given sum increment the count.
 */
int f(node* root, int&c,int x)
{
    if(root->left == NULL and root->right == NULL)
    {
        if(root->data == x) c=c+1;
        return root->data;
    }
    int ls=0,rs=0;
    if(root->left != NULL)
    ls = f(root->left , c,x);
    
    if(root->right != NULL)
    rs = f(root->right,c,x);
    
    if(ls+rs+root->data == x) c++;
    return  (ls+rs+ (root->data));
}
int countSubtreesWithSumX(node* root, int X)
{
	// Code here
	int count=0;
	f(root,count,X);
	return count;
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
