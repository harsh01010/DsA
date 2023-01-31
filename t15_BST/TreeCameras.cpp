#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
    int data;
    node*right,*left;

    node(int x) : data(x) , right(NULL) , left(NULL) {};

};

int TreeCameras(node*root,int&c)
{
    if(root==NULL) return 1;
    if(root->left==NULL and root->right==NULL) return  -1;

    int x = TreeCameras(root->left,c);
    int y = TreeCameras(root->right,c);

    if(x==-1 || y==-1) 
    {
        c++;
        return 0;
    }
    else if(x==0 || y==0)
    return 1;
    else
    return -1; // x=1 , y=1
}
int f(node*root)
{
    int ans = 0;
    int x = TreeCameras(root,ans);
    if(x==-1)  // only two levels present
    ans++;

    return ans;
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

int c = f(root);
cout<<c<<"\n";


return 0;
}