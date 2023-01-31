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
bool isComplete(node*root)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        int x = q.size();
        bool nullPre = false; 
        for(int i=0;i<x;i++)
        {
            node*temp = q.front();
            q.pop();
            if(nullPre && temp!=NULL) return false;
            if(temp!=NULL)
            {
                q.push(temp->left);
                q.push(temp->right);
            }
            else nullPre = true;
        }
    }

    return true;
}
bool f(node*root,int Prvdata)
{
    if(root==NULL) 
    return true;
    if(root->data < Prvdata) return false;
    return f(root->left,root->data) && f(root->right,root->data);
}

bool isTreeHeap(node*root)
{
    if(root==NULL) return true;
    return f(root->left,root->data) && f(root->right,root->data);
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
