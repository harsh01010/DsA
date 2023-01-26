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

// common nodes in two bsts or intersection of two bst

void f(node *root1, node *root2)
{
    stack<node*> st1, st2;
    while (1)
    {
        if (root1)
        {
            st1.push(root1);
            root1 = root1->left;
        }
        else if (root2)
        {
            st2.push(root2);
            root2 = root2->left;
        }

        else if (!st1.empty() and !st2.empty())
        {
            root1 = st1.top();
            root2 = st2.top();

            if (root1->data == root2->data)
            {
                cout << root1->data << " ";
                st1.pop();
                st2.pop();

                root1 = root1->right;
                root2 = root2->right;
            }
            else if (root1->data < root2->data)
            {
                root1 = root1->right;
                st1.pop();
                root2 = NULL; // again it will become top of second stack
            }
            else // root1->data>root2->data
            {
                root2 = root2->left;
                st2.pop();
                root1 = NULL;
            }
        }

        else
            break;
    }
}

node*insert(node*root,int x)
{
    if(root==NULL) return new node(x);
    if(root->data > x)
        root->left = insert(root->left,x);
    if(root->data < x)
        root->right = insert(root->right,x);

    return root;
}

int main()
{

    // node *root = new node(20);
    // root->left = new node(15);
    // root->right = new node(30);
    // root->left->left = new node(12);
    // root->left->right = new node(18);
    // root->right->right = new node(40);
    // root->left->left->left = new node(7);
    // root->right->right->left = new node(35);
    // root->right->right->right = new node(50);
    // root->right->right->right->right = new node(80);
    // /*
    //                         20
    //                        /   \
    //                       15    30
    //                     /  \       \
    //                   12   18       40
    //                   /             /  \
    //                  7             35   50
    //                                       \
    //                                        80
    // */

    node*root1 = NULL , *root2 = NULL;
    int n1, n2;
    cout<<"enter total number of nodes in 1st binary search tree\n";
    cin>>n1;
    cout<<"enter total number of nodes in 2nd binary search tree\n";
    cin>>n2;
    cout<<"enter nodes of 1st bst\n";
    while(n1--)
    {
        int x; cin>>x;
        root1 = insert(root1,x);
    }
    cout<<"enter nodes of 2nd bst\n";
    while(n2--)
    {
        int x; cin>>x;
        root2 = insert(root2,x);
    }

    cout<<"the intersetion of these two trees  are \n";
    f(root1,root2);

    return 0;
}
