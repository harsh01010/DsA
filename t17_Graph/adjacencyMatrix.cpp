#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    int n , m;
    cout<<"total number of vertices:- ";
    cin>>n;
    cout<<"total number of edges:- ";
    cin>>m;

    vector<vector<int>>adj(n,vector<int>(n,0));
    for(int i=0;i<m;i++)
    {
        cout<<"enter of end vertices of edge no. : "<<i+1<<"\n";
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    vector<int>lst[n];
    for(int i=0;i<n;i++)
    {
        for(auto j=0;j<n;j++)
        {
            if(adj[i][j]==1)
                lst[i].push_back(j);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<"vertex : "<<i<<" -> ";
        for(auto it:lst[i])
        {
            cout<<it<<" ";
        }
        cout<<"\n";
    }





return 0;
}