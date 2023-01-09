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

int fun(node*root)
{
      queue<node*>q;
      q.push(root);
      int width = INT_MIN;
      while(!q.empty())
      {
            int x = q.size();
            for(int i=0;i<x;i++)
            {
                  node*temp = q.front();
                  q.pop();
                  if(temp->left) q.push(temp->left);
                  if(temp->right)q.push(temp->right);
            }
            width = max(x,width);

      }
      return width;
}


int main()
{
      node *root = new node(20);
      root->right = new node(8);
      root->left = new node(12);
      root->right->left = new node(3);
      root->right->right = new node(59);

     
      int x = fun(root);
      cout<<x<<"\n";

     

      return 0;
}