class Solution:
    def dfs(self,root,p,t):
        if root is None:
            return 0
        c = p+root.val
        count = 0
        if c==t:
            count = 1
        return count + self.dfs(root.left,c,t)+self.dfs(root.right,c,t)                             

    def pathSum(self, root: Optional[TreeNode], t: int) -> int:
        if  root is None:
            return 0
        else:
            return self.dfs(root,0,t) + self.pathSum(root.left,t) + self.pathSum(root.right,t)
         