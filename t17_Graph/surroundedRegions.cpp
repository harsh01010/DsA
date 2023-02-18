#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
//replace O with X
bool valid(int x, int y, int n, int m)
{
    return x >= 0 && y >= 0 && x < n && y < m;
}
const int dr[4] = {0, 0, -1, 1};
const int dc[4] = {-1, 1, 0, 0};
void dfs(vector<vector<char>> mat, int i, int j, vector<vector<int>> &vis)
{

    vis[i][j] = 1;
    for (int k = 0; k < 4; k++)
    {
        int ni = i + dr[k];
        int nj = j + dc[k];
        if (valid(i, j, mat.size(), mat[0].size()) && mat[i][j] == 'O' && !vis[i][j])
            dfs(mat, ni, nj, vis);
    }
}
vector<vector<char>> filll(int n, int m, vector<vector<char>> mat)
{
    // code here
    vector<vector<char>> res = mat;
    vector<vector<int>> vis(n, vector<int>(m, 0));

    for (int i = 0; i < m; i++)
    {
        if (!vis[0][i] && mat[0][i] == 'O')
            dfs(mat, 0, i, vis);

        if (!vis[n - 1][i] && mat[n - 1][i] == 'O')
            dfs(mat, n - 1, i, vis);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i][0] && mat[i][0] == 'O')
            dfs(mat, i, 0, vis);

        if (!vis[i][m - 1] && mat[i][m - 1] == 'O')
            dfs(mat, i, m - 1, vis);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == 0)
            {
                res[i][j] = 'X';
            }
        }
    }
    return res;
}

int main()
{

    vector<vector<char>> mat{
        {'X', 'X', 'X', 'X', 'X'},
        {'O', 'X', 'X', 'X', 'O'},
        {'O', 'X', 'X', 'O', 'X'},
        {'X', 'X', 'X', 'O', 'O'}};
    int n = 4, m = 5;

    vector<vector<char>> res = filll(n, m, mat);
    for (auto it : res)
    {
        for (auto i : it)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}