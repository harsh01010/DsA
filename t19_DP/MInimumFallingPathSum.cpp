#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// top down

int f(int i, int j, vector<vector<int>> &arr, vector<vector<int>> &dp)
{
    if (j < 0 or j >= arr[0].size())
        return 1e9;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (i == 0)
        return dp[i][j] = arr[i][j];

    int x = f(i - 1, j, arr, dp);
    int y = min(x, f(i - 1, j - 1, arr, dp));
    int z = f(i - 1, j + 1, arr, dp);

    return dp[i][j] = min(y, z) + arr[i][j];
}
int minFallingPathSum(vector<vector<int>> &matrix)
{
    int i = matrix.size(), j = matrix[0].size();
    vector<vector<int>> dp(i, vector<int>(i, -1));
    int res = 1e9;
    for (int k = 0; k < j; k++)
    {
        res = min(res, f(i - 1, k, matrix, dp));
    }

    return res;
}

// bottom up
int minFallingPathSum(vector<vector<int>> &matrix)
{
    int i = matrix.size(), j = matrix[0].size();
    vector<vector<int>> dp(i, vector<int>(i, -1));
    for (int k = 0; k < j; k++)
    {
        dp[0][k] = matrix[0][k];
    }

    for (int p = 1; p < i; p++)
    {
        for (int q = 0; q < j; q++)
        {
            int x = dp[p - 1][q];
            int y = q - 1 >= 0 ? dp[p - 1][q - 1] : 1e9;
            int z = q + 1 < j ? dp[p - 1][q + 1] : 1e9;

            dp[p][q] = min(x, min(y, z)) + matrix[p][q];
        }
    }
    int res = 1e9;
    for (int x = 0; x < j; x++)
    {
        res = min(res, dp[i - 1][x]);
    }
    return res;
}

int main()
{

    return 0;
}