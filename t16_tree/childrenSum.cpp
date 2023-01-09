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

bool childrenSum(node*root)
{
      if(root == NULL) return true;
      int s = 0;
      if(root->right)s+=root->right->data;
      if(root->left)s+=root->left->data;
      return (root->data == s and childrenSum(root->left) and childrenSum(root->right));
      
}

int main()
{
      node *root = new node(20);
      root->right = new node(8);
      root->left = new node(12);
      root->right->left = new node(3);
      root->right->right = new node(59);

      cout<<childrenSum(root)<<"\n";
      

     

      return 0;
}