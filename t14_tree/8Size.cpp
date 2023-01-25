#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct Node{
      int data;
      Node *left , *right;

      Node(int d)
      {
         data = d;
         left = right = NULL;
      }
};

int countNode(Node*root)
{
      if(root == NULL) return 0;
   return 1 + countNode(root->left) + countNode(root->right); 
}

/* if the tree is complete binary tree then we can optimize the solution to O(logn*logn)*/

int count(Node*root)
{
   int lh = 0 , rh=0;
   Node*curr = root;
   while(curr)
   {
      lh++;
      curr=curr->left;
   }
   curr=root;
   while(curr)
   {
      rh++;
      curr=curr->right;
   }

if(rh==rh) return pow(2,lh)-1;  // if binary tree is perfect binary tree 
else return 1+count(root->left)+count(root->right); // else
}
/*******                                                                      */

int main()
{
   
  Node *root = new Node(10);

   root->left = new Node(20);
   root->right = new Node(30);

   root->left->left= new Node(40);
   root->left->right = new Node(50);
   root->right->left= new Node(60);
   root->right->right = new Node(70);


   root->left->left->left = new Node(80);
   root->left->left->right = new Node(90);
   root->left->right->left = new Node(100);
   root->right->right->right = new Node(1);

   int x = countNode(root);
   cout<<x<<"\n";

  
    
    

return 0;
}