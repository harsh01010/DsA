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

// tree from parent array
/*
Given an array of size N that can be used to represents a tree. The array indexes are values in tree nodes and array values give the parent node of that particular index (or node). The value of the root node index would always be -1 as there is no parent for root. Construct the standard linked representation of Binary Tree from this array representation.

approach:
use DAT like algorithm , this question is really good.

let's take an example:
  {1 5 5 2 2 -1 3}

  create an array or vector of node* , such that at it's each index there is a pointer to a node which contains index as data.

  index: 0        1       2       3       4       5       6         note the size of array     will be same as size of parent array
  array: node(0) node(1) node(2) node(3)  node(4) node(5) node(6)


  now we only have to adjust the right and left pointers,

  0 1 2 3 4 5 6
  1 5 5 2 2 -1 3
  what is the meaning of an element of this array?
  if the left of the node containing arr[i] is not NULL then creat a node containing i and assign to left , otherwise do the same right of node containing arr[i]
*/

node*TreeParent(int parent[],int n)
{
    vector<node*>res;
    node*root = NULL;
    for(int i=0;i<n;i++)
    {
        node*temp = new node(i);
        res.push_back(temp);
        if(parent[i] == -1) // it is going to be root
        root = temp;
    }
    // we are done with first for loop
    for(int i=0;i<n;i++)
    {
        if(parent[i]!=-1){
        node*temp = res[parent[i]];
        temp->left == NULL ? temp->left = res[i]:temp->right=res[i]; // this is 🤸‍♂️.
        }
    }

    return root;
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
    int arr[] = {1 ,13 ,31, 7 ,17 ,33 ,27, 1, 5 ,15, 19, 3 ,33 ,17 ,19 ,21 ,23, 25 ,31 ,11, 29 ,13 ,27 ,7 ,25 ,-1, 23 ,15, 3, 11 ,21, 5 ,9 ,9};
    //node*roo=TreeFromParent(arr,34);
    //trv(roo);
    preCompute(arr,34);
    mp();
    return 0;
}
