// calculate number of connected components
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

 //using dfs
void f(vector<vector<int>> adj, int s, int v, int visited[])
{
    visited[s] = 1;
    for (int i = 0; i < v; i++)
    {
        if (adj[s][i] == 1 && !visited[i])
            f(adj, i, v, visited);
    }
}
int numProvinces(vector<vector<int>> adj, int V)
{
    int ans = 0;
    int arr[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!arr[i])
        {
            ans++;
            f(adj, i, V, arr);
        }
    }
    return ans;
}

int main()
{

    return 0;
}