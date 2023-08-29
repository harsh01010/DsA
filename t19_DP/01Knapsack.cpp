#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*same logic as used in subset sum problem.*/
int memoiz(int wt[], int val[], int cw, int i, vector<vector<int>> &dp)
{
    if (i == 0)
    {
        if (wt[i] <= cw)
            return dp[i][cw] = val[i];
        else
            return dp[i][cw] = 0;
    }
    if (dp[i][cw] != -1)
        return dp[i][cw];
    int ni = memoiz(wt, val, cw, i - 1, dp);
    int ii = 0;
    if (cw >= wt[i])
        ii = val[i] + memoiz(wt, val, cw - wt[i], i - 1, dp);

    return dp[i][cw] = max(ni, ii);
}
int knapSack(int W, int wt[], int val[], int n)
{

    vector<vector<int>> dp(n, vector<int>(W + 1, -1));
    return memoiz(wt, val, W, n - 1, dp);
}

int knapSack(int W, int wt[], int val[], int n)
{

    vector<vector<int>> table(n, vector<int>(W + 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0)
            {
                if (wt[i] <= j)
                    table[i][j] = val[i];
            }
            if (j == 0)
                table[i][0] = 0;
            else if (i != 0)
            {
                int x = table[i - 1][j];
                int y = 0;
                if (wt[i] <= j)
                    y = val[i] + table[i - 1][j - wt[i]];

                table[i][j] = max(x, y);
            }
        }
    }
    return table[n - 1][W];
}

int knapSack(int W, int wt[], int val[], int n)
{

    vector<int> prev(W + 1, 0), curr(W + 1, 0);
    for (int i = 1; i <= W; i++)
    {
        if (wt[0] <= i)
            prev[i] = val[0];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            int x = prev[j];
            int y = 0;
            if (wt[i] <= j)
                y = val[i] + prev[j - wt[i]];
            curr[j] = max(x, y);
        }
        prev = curr;
    }

    return prev[W];
}
int main()
{

    return 0;
}