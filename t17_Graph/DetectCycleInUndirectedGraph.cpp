#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// detect cycle in undirected graph
/*
if a node is aleady visited then it must contain cycle if it requres to visit again untill it is not parent of cuurent node.
*/
// using DFS
bool DFS(vector<int> arr[], int vis[], int src, int parent)
{
    vis[src] = 1;
    for (auto it : arr[src])
    {
        if (!vis[it])
        {
            if (DFS(arr, vis, it, src))
                return true;
        }
        else if (it != parent) // 1----2
            return true;
    }
    return false;
}
bool detectCycleDfs(vector<int>arr[],int v)
{
    int vis[v] = {0};
    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            if(DFS(arr,vis,i,-1))
                return true;
        }
    }
    return false;
}
//using BFS
bool BFS(vector<int>arr[],int src,int vis[])
{
    queue<pair<int,int>>q;
    q.push({src,-1});
    vis[src] = 1;
    while(q.size())
    {
        pair<int,int>p = q.front();
        q.pop();
        for(auto it:arr[p.first])
        {
            if(!vis[it])
            {
                vis[it] = 1;
                q.push({it,p.first});
            }
            else if(it != p.second)
                return true;
        }
    }
    return false;
}

bool detechCycleBfs(vector<int>adj[],int v)
{
    int vis[v] = {0};
    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            if(BFS(adj,i,vis)) return true;
        }
    }
    return false;
}



int main()
{

    vector<int> arr[6];
    arr[0] = {1, 2, 4};
    arr[1] = {0, 3};
    arr[2] = {0, 3, 4};
    arr[3] = {1, 2, 5};
    arr[4] = {0, 2, 5};
    arr[5] = {3, 4};

    return 0;
}