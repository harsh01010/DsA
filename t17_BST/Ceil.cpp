#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
    int data;
    node*right;
    node*left;
    node(int x)
    {
        data = x;
        right = left = nullptr;
    }
};

void traverse(node*root)
{
    if(!root)return;
    traverse(root->left);
    cout<<root->data<<" ";
    traverse(root->right);
}

/* ceil in Bst*/
//recursive
int ceil(node*root,int x)
{
    if(!root)return -1;
    else if(root->data == x) return x;
    else if(root->data > x)
    {
        int a = ceil(root->left,x);
        return a!=-1 ? a:root->data;
        /*
        if root->data is greater than x , then there could be two cases 1. if it is the itself the ceil , 2. there are more smaller value of left side of
        it which is greater or equal x. so if 2nd case exists i.e. function call for left does not returns -1 then we return that value other wise we return root data.
         */ 
    }
    else 
    {
        return ceil(root->right,x);
    }
}
//iterative
int ceilIt(node*root,int x)
{
    int ans = -1;
    while(root)
    {
        if(root->data == x) return root->data;
        else if(root->data<x) root=root->right;
        else
        {
            ans = root->data;
            root=root->left;
        }
    }
    return ans;
}

int main()
{

node*root = new node(20);
root->left = new node(15);
root->right=new node(30);
root->left->left=new node(12);
root->left->right=new node(18);
root->right->right=new node(40);
root->left->left->left=new node(7);
root->right->right->left=new node(35);
root->right->right->right=new  node(50);
root->right->right->right->right=new  node(80);
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

traverse(root);cout<<"\n";
int x = ceil(root,35);
int y = ceil(root,100);
int z = ceil(root,32);
int a = ceil(root,55);
int b = ceil(root,8);
int c = ceil(root,13);
int d = ceil(root,38);
cout<<x<<" "<<y<<" "<<z<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";



return 0;
}
