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

int height(Node*root)
{
      if(root == NULL) return 0;

      return max(height(root->right) , height(root->left))+1;
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

   int h = height(root);
   cout<<"height = "<<h<<"\n";
    



return 0;
}