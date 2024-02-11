#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// Cheery Pick up 1 : 4D dp
/*
    intution:
        we have to first go up the (n-1,n-1) then return back to (0,0).
        what we can do that , we can start with (0,0) and keep 2 pair of indices with us both of them will move and try to reach to end ,
        we dont have to return back to (0,0) , if both the indices able to reach at (n-1,n-1);
*/
/***memoization********/
bool isValid(int i, int j, int n, int m)
{
    return i >= 0 and j >= 0 and i < n and j < m;
}
int func(int x, int y, int xx, int yy, vector<vector<int>> &arr, vector<vector<vector<vector<int>>>> &dp)
{
    int n = arr.size(), m = arr[0].size();

    if (!isValid(x, y, n, m) or !isValid(xx, yy, n, m) or arr[x][y] == -1 or arr[xx][yy] == -1)
    {
        return INT_MIN;
    }

    if (x == n - 1 and y == m - 1 or (xx == n - 1 and yy == m - 1))
    {
        return arr[x][y];
    }

    if (dp[x][y][xx][yy] != -1)
        return dp[x][y][xx][yy];
    int picked = 0;
    if (x == xx and y == yy)
    {
        picked += arr[x][y];
    }
    else
    {
        picked += arr[x][y] + arr[xx][yy];
    }

    int f1 = func(x + 1, y, xx + 1, yy, arr, dp);
    int f2 = func(x, y + 1, xx, yy + 1, arr, dp);
    int f3 = func(x + 1, y, xx, yy + 1, arr, dp);
    int f4 = func(x, y + 1, xx + 1, yy, arr, dp);

    picked += max(f1, max(f2, max(f3, f4)));
    return dp[x][y][xx][yy] = picked;
}

int cherryPickup(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<vector<vector<int>>>> dp(n, vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector<int>(m, -1))));
    int res = func(0, 0, 0, 0, grid, dp);
    return res > 0 ? res : 0;
}

// cheery pickup 2
bool isValid(int i, int j, int n, int m)
{
    return i >= 0 and j >= 0 and i < n and j < m;
}
int f(vector<vector<int>> &arr, int i, int j1, int j2, vector<vector<vector<int>>> &dp)
{
    int n = arr.size(), m = arr[0].size();
    if (!isValid(i, j1, n, m) || !isValid(i, j2, n, m))
        return int(-1e9);
    if (dp[i][j1][j2] != -1)
        return dp[i][j1][j2];
    if (i == n - 1)
    {
        if (j1 == j2)
            return arr[i][j1];
        else
            return arr[i][j1] + arr[i][j2];
    }

    int acc = 0;
    if (j1 == j2)
        acc += arr[i][j1];
    else
        acc += arr[i][j1] + arr[i][j2];
    int res = 0;
    for (int x = -1; x <= 1; x++)
    {
        for (int y = -1; y <= 1; y++)
        {
            res = max(res, f(arr, i + 1, j1 + x, j2 + y, dp));
        }
    }
    return dp[i][j1][j2] = acc + res;
}

int cherryPickup(vector<vector<int>> &grid)
{
    vector<vector<vector<int>>> dp(grid.size(), vector<vector<int>>(grid[0].size(), vector<int>(grid[0].size(), -1)));

    return f(grid, 0, 0, grid[0].size() - 1, dp);
}

int main()
{

    return 0;
}