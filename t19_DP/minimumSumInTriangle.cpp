#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// top  down

int f(int i, int j, vector<vector<int>> &arr, vector<vector<int>> &dp)
{
    if (i < 0 || j < 0 or (i >= 0 and arr[i].size() <= j))
        return INT_MAX;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (i == 0)
        return dp[i][j] = arr[i][j];
    return dp[i][j] = min(f(i - 1, j, arr, dp), f(i - 1, j - 1, arr, dp)) + arr[i][j];
}
int minimumTotal(vector<vector<int>> &triangle)
{

    int i = triangle.size();
    int j = triangle[i - 1].size();

    vector<vector<int>> dp(i, vector<int>(j, -1));

    int res = INT_MAX;
    for (int k = 0; k < j; k++)
    {
        res = min(res, f(i - 1, k, triangle, dp));
    }
    return res;
}

// bottom up
int minimumTotalTabulation(vector<vector<int>> &triangle)
{

    int i = triangle.size();
    int j = triangle[i - 1].size();
    vector<vector<int>> dp(i, vector<int>(j, -1));

    dp[0][0] = triangle[0][0];

    for (int p = 1; p < i; p++)
    {
        for (int q = 0; q < triangle[p].size(); q++)
        {
            int u = triangle[p - 1].size() > q ? dp[p - 1][q] : INT_MAX;

            int v = q - 1 >= 0 ? dp[p - 1][q - 1] : INT_MAX;

            dp[p][q] = min(u, v) != INT_MAX ? min(u, v) + triangle[p][q] : INT_MAX;
        }
    }

    int res = INT_MAX;
    for (auto it : dp[i - 1])
        res = min(res, it);

    return res;
}
int main()
{

    return 0;
}