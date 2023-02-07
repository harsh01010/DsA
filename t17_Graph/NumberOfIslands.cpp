#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

const int row[] = {0, 0, -1, 1, -1, 1, 1, -1};
const int clm[] = {1, -1, 0, 0, 1, -1, 1, -1};
// use dfs
void f(vector<vector<int>> arr, int i, int j, vector<vector<int>> &visited)
{
    visited[i][j] = 1;
    for (int k = 0; k < 8; k++)
    {
        i += row[k];
        j += clm[k];
        if ((i >= 0 && j >= 0 && i < arr.size() && j < arr[0].size()) && !visited[i][j] && arr[i][j] == 1)
            f(arr, i, j, visited);
        else // since we are not going to consider these i and j , so we have to change to previous
        {
            i -= row[k];
            j -= clm[k];
        }
    }
}

int getCount(vector<vector<int>> arr)
{
    int n = arr.size(), m = arr[0].size();

    vector<vector<int>> visited;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < m; j++)
            row.push_back(0);
        visited.push_back(row);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && arr[i][j] == 1)
            {
                f(arr, i, j, visited);
                ans++;
            }
        }
    }
    return ans;
}

int main()
{

    vector<vector<int>> arr{
        {0, 1, 1, 1, 0, 0, 1},
        {0, 0, 1, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 1},
        {1, 1, 1, 0, 0, 1, 0}};

    int res = getCount(arr);
    cout << res << "\n";

    return 0;
}

// we can further optimize above solution ,by modifying the given matrix and not using extra visited array
const int row[8] = {0, 0, -1, 1, -1, 1, 1, -1};
const int clm[8] = {1, -1, 0, 0, 1, -1, 1, -1};

void f(vector<vector<char>> &grid, int i, int j)
{
    if ((i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()) || grid[i][j] != '1')
        return;
    grid[i][j] = '0';
    for (int k = 0; k < 8; k++)
    {
        f(grid, i + row[k], j + clm[k]);
    }
}
int numIslands(vector<vector<char>> &grid)
{
    // Code here
    int n = grid.size(), m = grid[0].size();

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '1')
            {
                f(grid, i, j);
                ans++;
            }
        }
    }

    return ans;
}