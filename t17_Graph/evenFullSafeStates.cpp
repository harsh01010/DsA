#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool dfs(vector<vector<int>> &graph, vector<int> &vis, vector<int> &res, int i)
{
    vis[i] = 1;
    res[i] = 1;
    for (auto it : graph[i])
    {
        if (!vis[it])
        {
            if (dfs(graph, vis, res, it))
                return true;
        }
        else if (res[it])
            return true;
    }
    res[i] = 0;
    return false;
}

vector<int> eventualSafeNodes(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<int> vis(n, 0);
    vector<int> res(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(graph, vis, res, i);
        }
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (res[i] == 0)
            ans.push_back(i);
    }

    return ans;
}
int main()
{

    return 0;
}