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

/* Serialize and Deserialize Binary Tree

    The process of converting a binary tree into an array or a string is called serialization &
    the reverse process is called deserialization.

    approach 1:
    store any two traversals(including inorder)
    then we can easily deserialize.

    this approach requires two traversals of the tree.


    approach 2:
    use only one traversal , and mark the NULL.
    eg>
              10
            /
           20
           /
          30      
           \ 
            40   
    serialized array: 10 20 -1 -1 3- -1 -1 
*/

// we are using preorder traversal
void serialize(node*root , vector<int>&arr)
{
    if(root==NULL)
    {arr.push_back(-1); return;}
    arr.push_back(root->data);
    serialize(root->left,arr);
    serialize(root->right,arr);
}
int i = 0;
node*deSerialize(vector<int>arr)
{
    if(i == arr.size()) return NULL;
    int val = arr[i++];
    if(val==-1) return NULL;
    node*root = new node(val);
    root->left=deSerialize(arr);
    deSerialize(arr);
}
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
    return 0;
}
