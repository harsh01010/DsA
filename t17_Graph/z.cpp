#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


/*
detect cycle in diretced graph:
    the idea which have been used to detect cycle in directed graph is not going to work here because 
    of such cases:  1-->2<--3 , here 2 will be already visited when we will call for 3 but it does not forms cycle.

    so we will use another array of 0 ,1 which will check wether the neighbour is in recurssion stack or not.
*/

bool DFS(vector<int>adj[],int src,int vis[],int resSt[])
{
    vis[src] = 1;
    resSt[src] = 1;
    for(auto it:adj[src])
    {
        if(!vis[it])
        {
            if(DFS(adj,it,vis,resSt)) return true;
        }
        else if(resSt[it]) return true; // it should be in the curret rec. stack
    }
    resSt[src] = 0; // source will be poped form recur. stack.
    return false;
}

bool cycleDfs(vector<int>adj[],int v)
{
    int vis[v] = {0};
    int resSt[v] = {0};

    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            if(DFS(adj,i,vis,resSt)) return true;
        }
    }
    return false;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

    



return 0;
}