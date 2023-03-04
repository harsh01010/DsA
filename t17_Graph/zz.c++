#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// dijkstra algoritm

// simple implementation
vector<int>dijkstra1(vector<int>graph[],int v,int src)
{
    vector<int>dist(v,INT_MAX);
    dist[src] = 0;
    vector<bool>vis(v,false);
    for(int j=0;j<v-1;j++)
    {
        int u = -1;
        for(int i=0;i<v;i++)
        {
            if(!vis[i]&& (u==-1 || dist[i]<dist[u]))
                u = i;
        }
        vis[u] = 1;
        for(int i = 0;i<v;i++)
        {
            if(graph[u][i]!=0 && !vis[v])
                dist[i] = min(dist[i],dist[u]+graph[u][i]);
        }
    }
    return dist;
}

int main()
{

/*
    0---(4)----1
    |          |(10)
    |(2)       4----------(20)--5
    |          |(3)
    2----(5)---3

*/

vector<int>graph[6];
graph[0] = {0,4,2,0,0,0};
graph[1] = {}


return 0;
}