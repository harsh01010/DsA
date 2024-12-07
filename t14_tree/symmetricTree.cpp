#include<bits/stdc++.h>
using namespace std;
   class TreeNode{
        public:
        int val;
        TreeNode* left;
        TreeNode* right;
   };

    bool isSymmetric(TreeNode* root) {
        function<bool(TreeNode*, TreeNode*)> f = [&f](TreeNode*n1,TreeNode*n2)->bool{
                if(!n1 and !n2) return true;
                if(!n1 || !n2) return false;
            return n1->val == n2->val
                        and
                   f(n1->left,n2->right) and f(n1->right,n2->left);
        };
        return f(root->left,root->right);
    }
    
int main(){
    return 0;
}