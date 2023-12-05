/*
void f(TreeNode*root,int s,vector<int>curr,vector<vector<int>>&res)
    {
        if(!root) return;
        if(root->val == s and !root->left and !root->right){
            curr.push_back(root->val);
            res.push_back(curr);
            return;
        }
        curr.push_back(root->val);
        f(root->left,s-root->val,curr,res);
        f(root->right,s-root->val,curr,res);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>curr;
        f(root,targetSum,curr,ans);
        return ans;
    }
};

*/