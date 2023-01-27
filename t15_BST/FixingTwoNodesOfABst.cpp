#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node
{
    int data;
    node *right;
    node *left;
    node(int x)
    {
        data = x;
        right = left = nullptr;
    }
};

void traverse(node *root)
{
    if (!root)
        return;
    traverse(root->left);
    cout << root->data << " ";
    traverse(root->right);
}

// Fix BST with two nodes swapped

/*

10 20 30 50 45 35 60  -> after swapping  50 and 35 the array will be sorted -> 10 20 30 35 45 50 60

10 20 30 25 40 50 60 -> after swapping  30 and 25 the  array will be sorted  -> 10 20 25 30 40 50 60

*/

// how do we get these two values

void func(int arr[],int n)
{
    int prv = INT_MIN, first=-1 , second=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i] < prv)
        {
            if(first == -1)
            {
                first  = prv  ;
            }
            //no elese because we have to cover 2nd case also
            second = arr[i];
        }
        prv = arr[i];
    }
}

// we can modify the above function For BST also.

void SetPointers(node*root,node*prv,node*first,node*second)
{
    if(root==NULL) return;
    SetPointers(root->left,prv,first,second);
    if(prv!=NULL && root->data < prv->data )
    {
        if(first==NULL)
            first = prv;
        second = root;
    }
    prv = root;
    SetPointers(root->right,prv,first,second);

    //if we will traverse  the BST inorder then we will  get sorted data  and  we can find two nodes that are not in increasing order
}

void  FixBst(node*root)
{
    node*prv = NULL , *first = NULL , *second = NULL;
    
    SetPointers(root,prv,first,second);
    //swapping data of two nodes
    int x = first->data;
    first->data = second->data;
    second->data = x;

}


int main()
{

    node *root = new node(20);
    root->left = new node(15);
    root->right = new node(30);
    root->left->left = new node(12);
    root->left->right = new node(18);
    root->right->right = new node(40);
    root->left->left->left = new node(7);
    root->right->right->left = new node(35);
    root->right->right->right = new node(50);
    root->right->right->right->right = new node(80);
    /*
                            20
                           /   \
                          15    30
                        /  \       \
                      12   18       40
                      /             /  \
                     7             35   50
                                          \
                                           80
    */

    return 0;
}


