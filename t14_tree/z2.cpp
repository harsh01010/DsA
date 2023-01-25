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

node*prv = NULL , *head = NULL;

void func(node*root)
{
    if(root==NULL)return;
    f(root->left);
    if(prv == NULL) head = root;
    else{
        root->left = prv;
        prv->right = root;
    }
    prv = root;
    f(root->right);

}


int main()
{
    

    return 0;
}