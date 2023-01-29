//Bottom View of Binary Tree
/*
class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
vector<int>res;
map<int,Node*>mp;
queue<pair<int,Node*>>q;
q.push({0,root});
while(!q.empty())
{
    int x = q.size();
    for(int i=0;i<x;i++)
    {
    pair<int,Node*>p=q.front();
    q.pop();
    mp[p.first]=p.second;
    if(p.second->left)
    q.push({p.first-1,p.second->left});
    if(p.second->right)
    q.push({p.first+1,p.second->right});
        
        
    }
}
for(auto it:mp)
{
    res.push_back(it.second->data);
}
return res;
    }
};
*/