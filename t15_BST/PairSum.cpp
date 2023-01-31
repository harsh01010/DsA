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

// Pair sum in BST
/*
method 1:
store inorder traversal in an array , then use two pointer approach
 */

void inorder(node*root,vector<int>&res)
{
    if(root==NULL) return;
    inorder(root->left,res);
    res.push_back(root->data);
    inorder(root->right,res);
}

pair<int,int> PairSum(node*root,int sum)
{
    vector<int>arr;
    inorder(root,arr);
    int i = 0 , j = arr.size()-1;
    while(i<j)
    {
        if(arr[i]+arr[j] == sum) return {arr[i],arr[j]};
        else if(arr[i]+arr[j] < sum) i++;
        else j--;
    }
    return {-1,-1};
}

/*
method 2:
use set , and  check if the sum - root data is arleady present then return true. 
this approach can be used on a normal binary tree also
*/
bool f(node*root,unordered_set<int>&st,int sum)
{
    if(root==NULL) return false;
    if(f(root->left,st,sum)) return true;
    if( st.find(root->data-sum) != st.end()) return true;
    else st.insert(root->data);
    return (f(root->right,st,sum));
}
bool SumPair(node*root,int sum)
{
    unordered_set<int>st;
    return f(root,st,sum);
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

    // pair<int,int>p = PairSum(root,130);
    // cout<<p.first<<" "<<p.second<<"\n";

    cout<<SumPair(root,131);

    return 0;
}


