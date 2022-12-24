#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*  Binary tree

   every node has atmost 2 child.
   degree of a noad is atmost 2 , ( 0 , 1 ,2)
      

                  30
              40      50
           70        60  80

  
             [][30][]                     []->there is a child   ,[N]->null , no child node                             
      [][40][N]      [][50][]
    [N][70][N]     [N][60][N]   [N][80][N]

    every node has three fields: data or key , left child pointer/refrence , right child pointer/refrence

    we also have array representations for binary  trees:, binary heaps , sement trees

 Q.why do we study  only binary tree , not n ary tree?
 A. this most popular tree data structure , binary search tree , binary heap , segment tree is based on binary tree.most of the practical tree data structures are based on binary trees.



Types of Binary tree:

 Full Binary Tree: A Binary Tree is full if every node has either 0 or 2 children. The following are examples of a full binary tree. We can also say that a full binary tree is a binary tree in which all nodes except leave nodes have two children.

 Complete Binary Tree: A Binary Tree is a complete Binary Tree if all levels are completely filled except possibly the last level and the last level has all keys as left as possible.


 Perfect Binary Tree: A Binary tree is a Perfect Binary Tree when all internal nodes have two children and all the leave nodes are at the same level.

*/

struct Node
{
      int key;
      Node *left , *right;

      Node(int k)
      {
         key = k;
         left = right = NULL;
      }
};

int main()
{

  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30); 

  root->left->left = new Node(40);

   // Node *root = NULL; empty tree



return 0;
}