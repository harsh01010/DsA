#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// Inorder Traversal

struct Node
{
      int data;
      Node *left, *right;

      Node(int d)
      {
            data = d;
            left = right = NULL;
      }
};

void Inorder(Node *root)
{
      if (root == NULL)
            return;

      Inorder(root->left);
      cout << (root->data) << " ";
      Inorder(root->right);

      // time complexity: O(Total Nodes)
      // Aux. Space: O(height of tree)
}

void InorderIt(Node *r)
{
      stack<Node *> stk;
      Node *root = r;
      while (root or !stk.empty())
      {
            while (root)
            {
                  stk.push(root);
                  root = root->left;
            }
            root = stk.top();
            stk.pop();
            cout << (root->data) << " ";
            root = root->right;
      }
}

void preorder(Node *root)
{
      if (root == NULL)
            return;
      cout << (root->data) << " ";
      preorder(root->left);
      preorder(root->right);
}

void preorderIt(Node *root)
{
}

void postorder(Node *root)
{
      if (root == NULL)
            return;

      postorder(root->left);
      postorder(root->right);
      cout << root->data << " ";
}

void postorderIt(Node *root)
{
}


// level order traversal

void levelOrder(Node *root)
{
      if(root == nullptr) return;
      queue<Node*>q;
      q.push(root);
      while(q.size())
      {
            Node *curr = q.front(); cout<<curr->data<<" ";   
            q.pop();
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
      }
}
int main()
{
      Node *root = new Node(10);

      root->left = new Node(20);
      root->right = new Node(30);

      root->left->left = new Node(40);
      root->left->right = new Node(50);
      root->right->left = new Node(60);
      root->right->right = new Node(70);

      root->left->left->left = new Node(80);
      root->left->left->right = new Node(90);
      root->left->right->left = new Node(100);
      root->right->right->right = new Node(1);

      /*
         above tree is like:
                 10
               /   \
              20    30
            /   \   /  \
           40   50  60  70       inorder:80 40 90 20 100 50 10 60 30 70 1
          / \   /         \      Preorder:10 20 40 80 90 50 100 30 60 70 1
         80  90 100        1     postorder:80 90 40 100 50 20 60 1 70 30 10

      */

      // Inorder(root);
      // cout << "\n";
      // // InorderIt(root);
      // cout << "\n";
      // preorder(root);
      // cout << "\n";
      // // preorderIt(root);
      // cout << "\n";
      // postorder(root);
      // cout << '\n';
      // // postorderIt(root);
      // cout << "\n";
      levelOrder(root);

      return 0;
}
