#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
we cannot do consequtive transactions, that is there is a cool down time.
*/
int f(vector<int> prices, int i, int b, vector<vector<int>> &dp)
{
    if (i >= prices.size())
        return 0;
    if (dp[i][b] != -1)
        return dp[i][b];
    if (!b)
        return dp[i][b] = max(prices[i] + f(prices, i + 2, !b, dp), f(prices, i + 1, b, dp));
    else
        return dp[i][b] = max(-prices[i] + f(prices, i + 1, !b, dp), f(prices, i + 1, b, dp));
}
int maxProfit(vector<int> &prices)
{
    // vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
    // return f(prices,0,1,dp);
    int n = prices.size();
    vector<vector<int>> table(prices.size() + 2, vector<int>(2, 0));
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            if (!j)
                table[i][j] = max(prices[i] + table[i + 2][!j], table[i + 1][j]);
            else
                table[i][j] = max(-prices[i] + table[i + 1][!j], table[i + 1][j]);
        }
    }

    return table[0][1];
}

int main()
{

    return 0;
}