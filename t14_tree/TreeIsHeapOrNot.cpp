#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// check wether tree is a heap or not
bool isCBT(Node*root)
    {
        queue<Node*>q;
q.push(root);
 bool nullPre = false; 
while(!q.empty())
{
int x = q.size();
for(int i=0;i<x;i++)
{
    Node*temp = q.front();
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
    bool f(Node*root,int prvdata)
    {
        if(root==NULL)
        return true;
        if(root->data > prvdata) return false;
        return f(root->left,root->data) && f(root->right,root->data);
    }
    bool isHeap(struct Node* tree) {
        if(tree==NULL) return true;
        if(!isCBT(tree)) return false;
        return f(tree->left,tree->data) && f(tree->right,tree->data);
    }

int main()
{
   
    



return 0;
}