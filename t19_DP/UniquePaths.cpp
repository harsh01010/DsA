#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// top down approach

int f(int m, int n, vector<vector<int>> &dp)
{
    if (m < 1 or n < 1)
        return 0;
    if (dp[m][n] != -1)
        return dp[m][n];
    if (m == 1 or n == 1)
        return 1;

    int u = f(m, n - 1, dp);
    int l = f(m - 1, n, dp);

    return dp[m][n] = u + l;
}

int getAns(int m, int n)
{
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

    return f(m, n, dp);
}

// bottom up

int uniquePaths(int m, int n)
{
    vector<vector<int>> arr(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        arr[i][0] = 1;
    }
    for (int j = 0; j < n; j++)
    {
        arr[0][j] = 1;
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int x = arr[i - 1][j];
            int y = arr[i][j - 1];
            arr[i][j] = x + y;
        }
    }
    return arr[m - 1][n - 1];
}

int main()
{
    int m, n;
    cin >> m >> n;

    int res = getAns(m, n);
    cout << res << endl;

    return 0;
}