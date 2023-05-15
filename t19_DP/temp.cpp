#include <bits/stdc++.h>
using namespace std;

int calc(int n)
{
    return n * (n - 1) / 2;
}

void dfs(vector<int> graph[], int i, int &x, vector<int> &vis)
{
    x += 1;
    for (auto it : graph[i])
    {
        if (!vis[it])
        {
            vis[it] = 1;
            dfs(graph, it, x, vis);
        }
    }
}

void fun(vector<int> graph[], int n)
{
    vector<int> vis(n, 0);
    vector<int> temp;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            cout<<i<<":\n";
            dfs(graph, i, x, vis);
            cout<<x<<"\n";
            temp.push_back(x-1);
            x=0;
        }
    }

    int sum = 0;
    for (auto it : temp)
    {
        cout << it << " ";
    }
    for (int i = 0; i < temp.size(); i++)
    {
        sum *= calc(temp[i]);
    }
    cout << sum << "\n";
}

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> arr[n];
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    fun(arr, n);

    return 0;
}