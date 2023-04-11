#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void bfs_call(vector<int>arr[],int n,int s,vector<int>&vis)
{
    queue<int>q;
    q.push(s);
    vis[s]=1;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(auto it:arr[x])
        {
            if(!vis[it])
            {vis[it] = 1;
            q.push(it);}
        }
    }
}
void bfs(vector<int>arr[],int n)
{
    vector<int>vis(n,0);
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
            bfs_call(arr,n,i,vis);
    }
}



void dfs_call(vector<int>arr[],int s,vector<int>&vis)
{   
    cout<<s<<" ";
    vis[s] = 1;
    for(auto it:arr[s])
    {
        if(!vis[it])
            dfs_call(arr,it,vis);
    }

}
void dfs(vector<int>arr[],int n)
{
    vector<int>vis(n,0);
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
            dfs_call(arr,i,vis);
    }
}


int main()
{
    
    vector<int> graph[6];
    graph[0] = {1, 2};
    graph[1] = {3};
    graph[2] = {3};
    graph[3] = {4, 5};
    graph[4] = {};
    graph[5] = {};
    bfs(graph,6);
    cout<<endl;
    dfs(graph,6);



return 0;
}