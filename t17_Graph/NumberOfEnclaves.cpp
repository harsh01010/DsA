#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void dfs(int i, int j, vector<vector<int>> &grid, int &count, int n, int m, vector<vector<int>> &vis, int &flag)
{

    if (i < 0 || i >= n || j < 0 || j >= m)
    {

        flag = 1;

        return;
    }

    if (grid[i][j] == 0 || vis[i][j])
        return;

    vis[i][j] = 1;

    count += 1;

    dfs(i + 1, j, grid, count, n, m, vis, flag);

    dfs(i - 1, j, grid, count, n, m, vis, flag);

    dfs(i, j + 1, grid, count, n, m, vis, flag);

    dfs(i, j - 1, grid, count, n, m, vis, flag);
}

int numberOfEnclaves(vector<vector<int>> &grid)
{

    int n = grid.size(), m = grid[0].size();

    vector<vector<int>> vis(n, vector<int>(m, 0));

    int ans = 0;

    for (int i = 1; i < n - 1; i++)
    {

        for (int j = 1; j < m - 1; j++)
        {

            int count = 0, flag = 0;

            if (grid[i][j] == 1 && !vis[i][j])
            {

                dfs(i, j, grid, count, n, m, vis, flag);

                if (!flag)
                    ans += count;
            }
        }
    }

    return ans;
}
int main()
{

    return 0;
}