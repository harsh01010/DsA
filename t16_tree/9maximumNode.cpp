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

 int maximum(Node*root)   // we can also create an iterative solution , using level ordre traversal 
 {
      if(root == NULL)
       return INT_MIN;

     return max(root->data , max( maximum(root->left) , maximum(root->right)));
 }

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

   int x = maximum(root);
   cout<<x<<"\n";

  
    
    

return 0;
}