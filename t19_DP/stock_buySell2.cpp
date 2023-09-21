#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
we can buy and sell stock multiple times but if we have bought stock then we have to sell it then only we can buy similarly for sell also.

recursive approach:

at any index of the array we can either buy or sell a stock.
but we also needed to know that whether we have bought or sold a stock previously , to track this we will an extra variable

we will need to create a dp array of dimension:
    vector<vector<int>>(arr.size(),vector<int>(2,0-1));

*/

// memoization
int f(vector<int> prices, int i, int b, vector<vector<int>> &dp)
{

    if (i == prices.size() - 1)
        return dp[i][b] = !b ? prices[i] : 0;
    if (dp[i][b] != -1)
        return dp[i][b];

    if (b == 1)
        return dp[i][b] = max(-prices[i] + f(prices, i + 1, !b, dp), f(prices, i + 1, b, dp));
    else
        return dp[i][b] = max(prices[i] + f(prices, i + 1, !b, dp), f(prices, i + 1, b, dp));
}

int memoization(vector<int> arr)
{
    vector<vector<int>> dp(arr.size(), vector<int>(2, -1));
    return f(arr, 0, 1, dp);
}

// tabulation

int tabulation(vector<int> arr)
{
    vector<vector<int>> table(arr.size(), vector<int>(2, 0));
    int n = arr.size();
    table[n - 1][1] =0;
    table[n - 1][0] = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            if (j)
                table[i][j] = max(-arr[i] + table[i + 1][!j], table[i + 1][j]);
            else
                table[i][j] = max(arr[i] + table[i + 1][!j], table[i + 1][j]);
        }
    }
    return table[0][1];
}

// space optimization

int spaceOptimized(vector<int> prices)
{
    int n = prices.size();
    vector<int> curr(2, 0), next(2, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            if (!j)
                curr[j] = max(-prices[i] + next[!j], next[j]);
            else
                curr[j] = max(prices[i] + next[!j], next[j]);
        }
        next = curr;
    }
    return next[0];
}

int main()
{

    return 0;
}

