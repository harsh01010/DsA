#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void addEdge(vector<int>arr[],int u,int v)
{
    arr[u].push_back(v);
    arr[v].push_back(u);
}

void buildList(vector<vector<int>>mat,vector<int>arr[])
{
    for(int i=0;i<mat.size();i++)
        addEdge(arr,mat[i][0],mat[i][1]);
    
}

void PathFind(vector<int>adj[],int s,int d,int vis[],vector<int>pSr,vector<vector<int>>&res)
{
    pSr.push_back(s);
    if(s==d)
    {
        res.push_back(pSr);
        return;
    }
    vis[s] = 1;
    for(auto it:adj[s])
    {
        if(!vis[it])
        PathFind(adj,it,d,vis,pSr,res);
    }
    vis[s] = 0;
}

int main()
{

    int n = 5;
    vector<vector<int>>mat{
                    {0,1},
                    {0,3},
                    {0,4},
                    {1,2},
                    {1,3},
                    {1,4},
                    {2,3},
                    {3,4}
    };
    vector<int>arr[n];
    buildList(mat,arr);
    
    for(int i=0;i<n;i++)
    {
        cout<<i<<"=> ";
        for(auto it:arr[i])
        cout<<it<<" ";
        cout<<"\n";
    }
    
    
    int vis[n] = {0};
    vector<int>p;
    vector<vector<int>>paths; 
    PathFind(arr,0,n-1,vis,p,paths);

    int poora_rasta = paths.size();
    cout<<"toal paths: "<<poora_rasta<<" \n";
    
    cout<<"*********************************************************************************************************************\n\n";
    for(auto it:paths)
    {  
        cout<<"{ ";
        for(auto i:it)
        cout<<i<<" ";
        cout<<"}\n";
        cout<<"\n*********************************************************************************************************************\n";
    }

    



return 0;
}