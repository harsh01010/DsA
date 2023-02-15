#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void dispaly(vector<int>adj[],int n)
{
    for(int i=0;i<n;i++)
    {   
        cout<<i<<"->";
        for(auto it:adj[i])
        {
            cout<<it<<' ';
        }
        cout<<"\n";
    }
}

void bfs(vector<int>adj[],int v)
{
    int vis[v] = {0};
    queue<int>q;
    q.push(0);
    vis[0] = 1;
    while(q.size())
    {
        int x = q.front();
        cout<<q.front()<<" ";
        q.pop();
        for(auto it:adj[x])
        {
            if(!vis[it])
            {    q.push(it);
                vis[it] = 1;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"total number of vertices in the graph\n";
    cin>>n;
    vector<int>arr[n];
    int e;
    cout<<"enter total number of edges in the graph\n";
    cin>>e;

    for(int i=0;i<e;i++)
    {
        int u,v;
        cout<<"enter the end vertices of the edge :"<<i<<"\n";
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    dispaly(arr,n);
    cout<<"\n";
    bfs(arr,n);
return 0;
}