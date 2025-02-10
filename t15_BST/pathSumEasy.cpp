#include<bits/stdc++.h>

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}

 };


    bool hasPathSum(TreeNode* root, int ts) {
        if(!root)return false;
        if(root->left==NULL && root->right==nullptr and root->val==ts) return true;
        return hasPathSum(root->left,ts-(root->val)) || hasPathSum(root->right,ts-(root->val));
    }

int main(){
    return 0;
}