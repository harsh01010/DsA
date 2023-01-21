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

/* Floor in Bst*/

//recursive
int floor(node*root,int x)
{
    if(root==NULL) return -1;
    else if(root->data == x)return x;
    else if(root->data<x)
    {
        int a = floor(root->right,x);
        return a==-1?root->data:a;
        /* if current node value is less than x , then it's left will be always samller than it , so we need to go to right,
        but if there is no greater or equal element in right then we have to return current root data as it's floor*/
    }
    else
    {
    return floor(root->left,x);
    /* we need not to worry if about what happens if there is no floor, it will simply return -1*/
    }
}

//iterative
int floorIt(node*root,int x)
{
    int ans = -1;
    while(root)
    {
        if(root->data==x)
        return root->data;
        else if(root->data>x)
        root=root->left;
        else
        {
            ans=root->data;
            root=root->right;
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
int x = floor(root,35);
int y = floor(root,100);
int z = floor(root,32);
int a = floor(root,55);
int b = floor(root,8);
int c = floor(root,13);
int d = floor(root,38);
cout<<x<<" "<<y<<" "<<z<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";



return 0;
}
