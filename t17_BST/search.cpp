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


// search in BST

bool Rec(node*root,int x)
{
    if(root==NULL) return false;
    if(x==root->data)return true;
    if(x>root->data) return Rec(root->right,x);
    else return Rec(root->left,x);
     //TC:O(h)
    //SC:O(h) // recursive
}

bool ite(node*root,int x)
{
    node*curr = root;
    while(!curr)
    {
        if(curr->data ==x)return true;
        else if(x>curr->data)curr=curr->right;
        else curr=curr->left;
    }
    return false;
    //TC:O(h)
    //SC:O(1)//iterative
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

traverse(root);
cout<<"\n";
int x = 35;
int y = 0;
if(Rec(root,x))
cout<<x<<":"<<"present\n";

if(!ite(root,y))
cout<<y<<":"<<"not present\n";




return 0;
}
