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

// vertical traversal in Binary tree
/*
use horizontal distance , level order traversal and map
use horezontal distance as key and a vector as value , if hd already present the push_back root->data into it's value
 */

void print(node*root)
{
    map<int,vector<int>>mp;
    queue<pair<int,node*>>q;
    q.push({0,root});
    while(!q.empty())
    {
        int x = q.size();
        for(int i=0;i<x;i++)
        {
            pair<int,node*>p = q.front();
            q.pop();
            if(mp.find(p.first) != mp.end())
            {       
                vector<int>temp = mp[p.first];
                temp.push_back(p.second->data);
                mp[p.first] = temp;
            }
            else
            {
                // vector<int>temp;
                // temp.push_back(p.second->data);
            mp[p.first].push_back(p.second->data);
            }

            if(p.second->left)
            q.push({p.first-1,p.second->left});
            if(p.second->right)
            q.push({p.first+1 , p.second->right});
        }
        //return res;
    }
    //vector<int>res;
        for(auto it:mp)
        {
            for(auto i:it.second)
            {
                // res.push_back(i)
                cout<<i<<" ";
            }
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

   print(root);

    return 0;
}


