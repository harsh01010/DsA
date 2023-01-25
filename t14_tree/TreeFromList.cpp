#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct Node{
    int data;
    Node*next;
    Node(int x)
    {
         data =x;
         next =NULL;
    }
};
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        data = x;
        left = right = NULL;
    }
};
/*
use level order traversal to solve this problem
*/

void convert(Node *head, TreeNode *&root) {
    queue<TreeNode**>q;
    q.push(&root);
    while(!q.empty())
    {
        int t = q.size();
        for(int i=0;i<t;i++)
        {
            TreeNode*x = *q.front(); q.pop();
            if(x==NULL)
            {
                x = root = new TreeNode(head->data);
                head=head->next;
            }
            if(head){
                x->left = new TreeNode(head->data);
                head=head->next;
            }
            if(head){
                x->right = new TreeNode(head->data);
                head=head->next;
            }
            if(x->left)
            q.push(&(x->left));
            if(x->right)
            q.push(&(x->right));
            
        }
    }
}

int main()
{
    TreeNode *root = new TreeNode(10);
    root->right = new TreeNode(20);
    root->left = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->left->left = new TreeNode(50);
    root->left->left->right = new TreeNode(60);
    root->left->right = new TreeNode(70);
    root->left->right->right = new TreeNode(80);
    root->left->right->right->right = new TreeNode(90);

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
    return 0;
}
