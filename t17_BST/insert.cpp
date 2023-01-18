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


//recursive********************************************/
void f(node*root,int x)
{
    if(root->data==x)return;
    if(root->data < x)
    {
        if(!root->right){root->right=new node(x);return;}
        else f(root->right,x);
    }
    if(root->data>x)
    {
        if(!root->left){root->left=new node(x);return;}
        else f(root->left,x);
    }
}

    
    node*insertRec(node*root,int x)
    {
        if(root==NULL)
        return new node(x);
        node*curr=root;
        f(root,x);
        return curr;
    }

//****************************************************************************/

//iterative*********************************************************************

node*insertIter(node*root,int x)
{
    if(root==NULL) return new node(x);
    node*curr = root;
    while(1)
    {
        if(root->data==x)return curr;
        if(root->data < x)
        {
            if(!root->right){root->right=new node(x);return curr;}
            else root=root->right;
        }
        else
        {
            if(!root->left){root->left=new node(x);return curr;}
            else root=root->left;
        }
    }
    return curr;

}

//**************LESS LINES******************************************************************************************/

node*inRec(node*root,int x)
{
    if(root==NULL)
    return new node(x);
    if(root->data<x)
    root->right= inRec(root->right,x);
    if(root->data>x)
    root->left= inRec(root->left,x);

    return root;
}
node* inIter(node*root,int x)
{
    node*curr = root;
    node*parent=NULL;
    node*target = new node(x);
    while(curr)
    {
        parent = curr;
        if(curr->data==x)return root;
        else if(curr->data<x)curr=curr->right;
        else curr=curr->left;
    }
    if(parent==NULL)return target;//if root is NULL
    if(parent->data < x) parent->right=new node(x);
    else parent->left=new node(x);
    return parent;
}


// These functions are same as search function , hence time and space comoplexity same as that.
//********************************************************************************************************************/

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
root=insertRec(root,54);
traverse(root);cout<<"\n";
root=insertRec(root,19+1);
traverse(root);cout<<"\n";
root=insertIter(root,100);
traverse(root);cout<<"\n";
root=insertIter(root,7);
traverse(root);cout<<"\n";




return 0;
}
