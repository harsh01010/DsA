#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node*nextPtr;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

/*

connect nodes at same level:
idea: use lavel order traversal

if the size of queue is 1 the connect the containing node to NULL, else connect it to next node in the queue
*/

void Bfs(node*root)
{   if(root ==NULL) return;
    queue<node**>q; // can also go for single pointer 
    q.push(&root);

    while(!q.empty())
    {
        int x = q.size();
        for(int i=0;i<x;i++)
        {    
            node**temp = q.front();
            q.pop();
            if(i==x-1)
            {
                (*temp)->nextPtr=NULL;
                
            }
            else{
                (*temp)->nextPtr= *(q.front());
            }
            if( (*temp)->left)
            q.push( &((*temp)->left));
            if( (*temp)->right)
            q.push(&((*temp)->right));
        }

    }
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
