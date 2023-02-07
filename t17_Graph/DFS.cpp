
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void AddList(vector<int> arr[], int u, int v)
{
    arr[u].push_back(v);
    arr[v].push_back(u);
}

// from a given source:

void DfS(vector<int> adj[], int s, int vis[])
{
    vis[s] = 1;
    cout << s << " ";
    for (auto it : adj[s])
    {
        if (!vis[it])
            DfS(adj, it, vis);
    }
}

// when the graph is connected:

void dfs_con(vector<int> adj[], int v)
{
    int vis[v] = {0};
    int start = 0;
    DfS(adj, start, vis);
}

// when the graph is disconnected(works for connected as well)

void dfs_diss(vector<int> adj[], int v)
{
    int vis[v] = {0};
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
            DfS(adj, i, vis);
    }
}

int main()
{

    int v = 6;

    vector<int> arr[v];

    // connected cyclic graph with 6 vertices
    AddList(arr, 0, 1);
    AddList(arr, 1, 2);
    AddList(arr, 2, 3);
    AddList(arr, 3, 4);
    AddList(arr, 4, 5);
    AddList(arr, 5, 0);

    dfs_con(arr, 6);
    cout << endl;
    // disconnected graph with 3 components
    v = 9;
    vector<int> arr2[v];
    AddList(arr2, 0, 1);
    AddList(arr2, 1, 2);
    AddList(arr2, 2, 0);

    AddList(arr2, 3, 4);
    AddList(arr2, 4, 5);
    AddList(arr2, 5, 3);

    AddList(arr2, 6, 7);
    AddList(arr2, 7, 8);
    AddList(arr2, 8, 6);

    dfs_diss(arr2, 9);

    return 0;
}
/*
    Time complexity:O(V+E)
    Space complexity:O(V)
*/
/*
    Applications of DFS:
    ->cycle detection
    ->topological sorting
    ->strongly connected components
    ->solving maze and similar puzzles
    ->path finding
*********************************************************************************************************************************************************************************************************/

// dfs on adjacency list and matrix
/*
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void AddMat(int **ad,int u,int v)
{
    ad[u][v] = 1;
    ad[v][u] =1;
}

void print(int **ad,int v)
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(ad[i][j] == 1)
            cout<<ad[i][j]<<" ";
            else{ad[i][j]=0; cout<<0<<" ";}
        }
        cout<<"\n";
    }
}

void printList(vector<int>arr[],int  v)
{
    for(int i = 0 ;i<v;i++)
    {
        cout<<i<<"->";
        for(auto it:arr[i])
        cout<<it<<" ";
        cout<<"\n";
    }
}

void dfs1(vector<int>arr[],int s,int visited[])
{
    cout<<s<<" ";
    visited[s] = 1;
    for(auto it:arr[s])
    {
        if(!visited[it])
        dfs1(arr,it,visited);
    }
}

void dfs1_dis(vector<int>arr[],int v)
{
    int visited[v] = {0};
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
    dfs1(arr,i,visited);
    }
}

void dfs2(int **arr,int s,int visited[],int v)
{

    cout<<s<<" ";
    visited[s] = 1;
    for(int i=0;i<v;i++)
    {
        if(arr[s][i]==1 && !visited[i])
        dfs2(arr,i,visited,v);
    }

}

void dfs2_dis(int **arr,int v)
{
    int visited[v] = {0};
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        dfs2(arr,i,visited,v);

    }
}



int main()
{
    int v;
    v = 6;

    int **ad;
    ad = new int*[v];
    for(int i = 0;i<v;i++)
        ad[i] = new int[v];

    ad[0][0] = {0};
    AddMat(ad,0,1);
    AddMat(ad,0,2);
    AddMat(ad,1,2);
    AddMat(ad,1,3);
    AddMat(ad,4,5);

    print(ad,v);

    // matrix to list
    vector<int>arr[v];
    for(int i=0;i<v;i++)
    {
        for(int j =0;j<v;j++)
        {
            if(ad[i][j] == 1)
            arr[i].push_back(j);
        }
    }

    printList(arr,v);

    dfs1_dis(arr,v);
    cout<<"\n";
    dfs2_dis(ad,v);

return 0;
}
*/