#include<bits/stdc++.h>
using namespace std;



 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 TreeNode* sortedArrayToBST(vector<int>& nums) {
        function<TreeNode*(int,int)> f = [&](int l,int h)->TreeNode*{
            if(h<l) return nullptr;
            int mid = (l+h)/2;
            TreeNode*curr = new TreeNode(nums[mid]);
            curr->left = f(l,mid-1);
            curr->right = f(mid+1,h);
            return curr;
        };
        return f(0,nums.size()-1);
    }
 
int main(){
    

    return 0;
}