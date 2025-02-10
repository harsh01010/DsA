#include<bits/stdc++.h>     

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        int lm = minDepth(root->left);
        int rm = minDepth(root->right);
        if(!lm)return rm+1;
        if(!rm) return lm+1;
        return 1 + min(lm,rm);
    }
};