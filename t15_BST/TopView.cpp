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

// top view of bst 
/*
 store of distance of each node from root node in a map using level order traversal , now traverse the map
 */
void print(node*root,int y)
{
    map<int,node*>ump; // map will be sorted in order of the keys here keys we be horizontal distances so this solution also works for TREEs.
    queue< pair<int,node*>>q;
    q.push({0,root});
    while(!q.empty())
    {
        int x= q.size();

        for(int i=0;i<x;i++)
        {
            pair<int,node*>y  = q.front();
            q.pop();
            if(ump.find(y.first) == ump.end())
            ump[y.first] = y.second;

            if(y.second->left)
            q.push( {y.first-1,y.second->left});
            if(y.second->right)
            q.push({y.first+1,y.second->right});
        }
    }

    for(auto it:ump)
    {
        cout<<it.second->data<<" ";
    }
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

   print(root,0);

    return 0;
}


