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

// void help(Node*root , int k , int cnt = 0)
// {
//     if(root == NULL) return;
//     if(cnt == k) cout<<root->data<<" ";
//      int x = cnt+1;
//      help(root->left , k , x);
//      help(root->right,k,x);
     
// }


// void print(Node*root , int k)
// {
//      help(root , k ,0);
// }


  void print(Node*root , int k)
  {
         if(root == NULL) return;
         if(k==0)cout<<root->data<<" ";
         print(root->left , k-1);
         print(root->right , k-1);
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

   print(root , 3);
    



return 0;
}