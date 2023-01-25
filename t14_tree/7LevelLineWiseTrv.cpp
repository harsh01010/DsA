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



// level order traversal line by line 


 // 
void LevelByLine(Node*root)
{
    
     queue<Node*>q;
     q.push(root);
     q.push(NULL);  // we will push NULL at the end of a level , and when we encounter NULL while popping we will print "\n"

     while(q.size() > 1) // the size of q will be atleast 1 because of the NULL , we pushed earlier
     {
            Node*temp = q.front();
            q.pop();

            if(temp == NULL)
            {
                  cout<<"\n";
                  q.push(NULL); //  while popping the previous nodes , their childrens have been pushed from rear , now we have encountered the NULL
                               // which indicates that one lavel has been ended , so will push NULL to rear , repeat the process.
                  continue;
            }
          cout<<temp->data<<" ";
          if(temp->right) q.push(temp->right);
          if(temp->left) q.push(temp->left);
     }
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

  
    LevelByLine(root);
    

return 0;
}