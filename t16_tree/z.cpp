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

// the below function will create a path vector from node to root
bool pathFind(node *root, int n, vector<node *> &vec)
{
      if (root == NULL)
            return false;
      vec.push_back(root);
      if (root->data == n)
            return true;
      if (pathFind(root->left, n, vec) || pathFind(root->right, n, vec))
            return true; // if there exist a path from curr node to desired node then return  true.

      // else
      vec.pop_back(); // we have pushed a wrong node , pop it.
      return false;
}

node *LCA(node *root, int n1, int n2)
{
      vector<node *> path1, path2;
      if (!pathFind(root, n1, path1))
            return NULL;
      if (!pathFind(root, n2, path2))
            return NULL;
      // iterate the path arrays for both nodes , untill we find first mismatch, all previous elemetns will be ancestor of these two nodes,node before the mismatch will be lowest comman ancestor for two nodes.
      int i = 0;
      for(;i<path1.size() and i<path2.size();i++)
      {
            if(path1[i] != path2[i]) break;
      }
      if(i<path1.size() and i<path2.size()) return path1[i-1];
      if(i<path1.size()) return path2[i-1];
      if(i<path2.size()) return path2[i-1];
      return NULL;
}

/*
for above solution.

the  time complexity of find path function is theeta n (its a simple traversal of the tree) (theeta n + theeta n)
Lca function is O(n) time.
overall Tc => theeta (n)
aux space => O(n)

it requires three traveral of the tree.(2 to create the path1 and path2 vectors and 1 for comparing the equal nodes of the path vectors).



**********************************************************************************************************************************************************************************/
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
      // lca of 60 , 90
      node *x = LCA(root, 60, 90);
      cout << "the LCA of 60 and 90 is: " << x->data << "\n";
      // lca of 50 , 60
      node *y = LCA(root, 50, 60);
      cout << "the LCA of 50 and 60 is: " << y->data << "\n";
      // lca of 60 , 40
      node *z = LCA(root, 60, 40);
      cout << "the LCA of 60 and 40 is: " << z->data << "\n";

      return 0;
}
